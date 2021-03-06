// LCDWorker.bsv - Module to interact with LCD, controlled by OCCP
// Copyright (c) 2009 Atomic Rules LLC - ALL RIGHTS RESERVED
// Christina Smith 2012.09.21

import OCWip         ::*;
import LCDController ::*;

import GetPut        ::*;
import FIFO          ::*;	
import FIFOF         ::*;	
import Vector        ::*;
import DReg          ::*;

interface LCDWorkerIfc;
  interface WciES wciS0;
  interface LCD lcd;
endinterface 

(* synthesize, default_clock_osc="wciS0_Clk", default_reset="wciS0_MReset_n" *)
module mkLCDWorker#(parameter Bool hasDebugLogic) (LCDWorkerIfc);
  WciESlaveIfc            wci         <- mkWciESlave;
  Reg#(Bit#(32))          r0          <- mkReg(0);
  Reg#(Bit#(32))          r4          <- mkReg(0);
  Reg#(Bit#(32))          r8          <- mkReg(0);
  Reg#(Bit#(32))          rC          <- mkReg(0);
  Reg#(Bit#(32))          r10         <- mkReg(0);
  Reg#(Bit#(32))          r14         <- mkReg(0);
  Reg#(Bit#(32))          r1C         <- mkReg(0);
  Reg#(Bit#(32))          r20         <- mkReg(0);
  Reg#(Bit#(32))          r24         <- mkReg(0);
  Reg#(Bit#(32))          r28         <- mkReg(0);
  Reg#(Bit#(8))           b18         <- mkReg(8'h18);
  Reg#(Bit#(8))           b19         <- mkReg(8'h19);
  Reg#(Bit#(8))           b1A         <- mkReg(8'h1A);
  Reg#(Bit#(8))           b1B         <- mkReg(8'h1B);
  Reg#(Bool)              sFlagState  <- mkReg(False);
  Reg#(Bool)              needs_init  <- mkReg(True);
  Reg#(Bool)              wrt8        <- mkReg(False);
  
  LCDController           lcd_ctrl    <- mkLCDController;
  
  rule init_lcd if (needs_init);  // Paint the 16x2 LCD...
    Vector#(16,Bit#(8))  text1 = lcdLine("Initializing....");
    Vector#(16,Bit#(8))  text2 = lcdLine("................");
    lcd_ctrl.setLine1(text1);
    lcd_ctrl.setLine2(text2);
    needs_init <= False;
  endrule

// WCI Control logic here...

(* descending_urgency = "wci_wslv_ctl_op_complete, wci_wslv_ctl_op_start, wci_cfwr, wci_cfrd" *)
(* mutually_exclusive = "wci_cfwr, wci_cfrd, wci_ctrl_EiI, wci_ctrl_IsO, wci_ctrl_OrE" *)

rule wci_cfwr (wci.configWrite); // WCI Configuration Property Writes...
 let wciReq <- wci.reqGet.get;
   case (wciReq.addr[7:0]) matches
     'h00 : r0  <= unpack(wciReq.data);
     'h04 : r4  <= unpack(wciReq.data);
     'h08 : r8 <= wciReq.data;
     'h0C : rC <= wciReq.data;
     'h10 : r10 <= wciReq.data;
     'h14 : r14 <= wciReq.data;
     'h1C : r1C <= wciReq.data;
     'h20 : r20 <= wciReq.data;
     'h24 : r24 <= wciReq.data;
     'h28 : action wrt8 <= True; r28 <= wciReq.data; endaction
   endcase
   $display("[%0d]: %m: WCI CONFIG WRITE Addr:%0x BE:%0x Data:%0x",
     $time, wciReq.addr, wciReq.byteEn, wciReq.data);
   wci.respPut.put(wciOKResponse); // write response
endrule

rule wci_cfrd (wci.configRead); // WCI Configuration Property Reads...
 let wciReq <- wci.reqGet.get; Bit#(32) rdat = '0;
   case (wciReq.addr[7:0]) matches
     'h00 : rdat = pack(r0);
     'h04 : rdat = pack(r4);
     'h18 : begin
         Bit#(32) myBytes = 0;
         if (wciReq.byteEn[0]==1) myBytes = myBytes | extend(b18)<<0;
         if (wciReq.byteEn[1]==1) myBytes = myBytes | extend(b19)<<8;
         if (wciReq.byteEn[2]==1) myBytes = myBytes | extend(b1A)<<16;
         if (wciReq.byteEn[3]==1) myBytes = myBytes | extend(b1B)<<24;
         rdat = myBytes;
      end
     'h20 : rdat = extend(pack(sFlagState));
   endcase
   $display("[%0d]: %m: WCI CONFIG READ Addr:%0x BE:%0x Data:%0x",
     $time, wciReq.addr, wciReq.byteEn, rdat);
   wci.respPut.put(WciResp{resp:DVA, data:rdat}); // read response
endrule

rule actOnWrt8(wrt8);
  wrt8 <= False;
  lcd_ctrl.setLine1(reverse(unpack({r8, rC, r10, r14})));
  lcd_ctrl.setLine2(reverse(unpack({r1C, r20, r24, r28})));
endrule

// Control state changes...
rule wci_ctrl_EiI (wci.ctlState==Exists && wci.ctlOp==Initialize);
  wci.ctlAck;
endrule
rule wci_ctrl_IsO (wci.ctlState==Initialized && wci.ctlOp==Start);
  wci.ctlAck;
endrule
rule wci_ctrl_OrE (wci.isOperating && wci.ctlOp==Release);
  wci.ctlAck;
endrule

rule updateSflag (sFlagState);
  action wci.drvSFlag; endaction
endrule

  interface Wci_s wciS0 = wci.slv;
  interface LCD lcd = lcd_ctrl.ifc;
endmodule
