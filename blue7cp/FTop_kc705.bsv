// FTop_kc705.bsv - the top level module
// Copyright (c) 2012 Atomic Rules LLC - ALL RIGHTS RESERVED
// Christina Smith
// 2012.09.19

//BSV imports
import GetPut          ::*;
import Connectable     ::*;
import LCDWorker       ::*;
import LCDController   ::*;
import FIFO            ::*;
import Clocks          ::*;
import XilinxCells     ::*;
import Vector          ::*;
// Other Imports
import GMAC            ::*;
import MDIO            ::*;
import XilinxExtra     ::*;
import GbeQABS         ::*;
import EDCP            ::*;
import OCCP            ::*;
import ClientServer    ::*;
import OCWip           ::*;

// Interface
interface FTop_kc705Ifc;
  interface Reset       gmii_rstn;    // GMII Reset driven out to Phy
  interface Clock       rxclkBnd;     // GMII RX Clock (provided here for BSV interface rules)  
  interface GMII_RS     gmii;         // The GMII link RX/TX
  interface MDIO_Pads   mdio;         // The MDIO pads
  interface LCD         lcd;    
endinterface: FTop_kc705Ifc

// Module 
(* synthesize, no_default_clock, no_default_reset, clock_prefix="", reset_prefix=""  *)
module mkFTop_kc705#(Clock sys0_clkp, Clock sys0_clkn, Reset sys0_rstn,
                     Clock sys1_clkp, Clock sys1_clkn,     // 125 MHz Ethernet XO Reference
                     Clock gmii_rx_clk)(FTop_kc705Ifc);    // 125 MHz GMII RX Clock from Marvell Phy
// State
Clock           sys0_clk   <- mkClockIBUFDS(sys0_clkp, sys0_clkn);   
Reset           sys0_rst   <- mkAsyncReset(16, sys0_rstn, sys0_clk);
IDELAYCTRL      idc        <- mkMYIDELAYCTRL(1, clocked_by sys0_clk, reset_by sys0_rst); // Needed by GMII/GMAC
Clock           sys1_clki  <- mkClockIBUFDS_GTE2(True, sys1_clkp, sys1_clkn);
Clock           sys1_clk   <- mkClockBUFG(clocked_by sys1_clki);
Reset           sys1_rst   <- mkAsyncReset(1, sys0_rst, sys1_clk);

GbeQABSIfc      gbe        <- mkGbeQABS(False, gmii_rx_clk, sys1_clk, sys1_rst, clocked_by sys0_clk, reset_by sys0_rst);
EDCPAdapterIfc  edcp       <- mkEDCPAdapter(clocked_by sys0_clk, reset_by sys0_rst); 
OCCPIfc#(15)    cp         <- mkOCCP(?, sys0_clk, sys0_rst, clocked_by sys0_clk, reset_by sys0_rst);

Vector#(15, WciEM) vWci = cp.wci_Vm;

LCDWorkerIfc    lcdWrk     <- mkLCDWorker(False, clocked_by sys0_clk, reset_by vWci[1].mReset_n);
// Rules
//rule gmacOperate;
//  gmac.txOperate;
//  gmac.rxOperate;
//endrule

rule hardMac;
  edcp.macAddr(48'h00_0A_35_02_76_B3);
endrule

// Connections
//mkConnection(gmac.tx, swap.out);
//mkConnection(swap.in, gmac.rx);
mkConnection(gbe.client, edcp.server);
mkConnection(edcp.client, cp.server);
mkConnection(vWci[1], lcdWrk.wciS0);

//mkConnection(gbe.client.request, gbe.client.response);

// interfaces provided here
interface LCD         lcd         = lcdWrk.lcd;
interface Reset       gmii_rstn   = sys1_rst;
interface GMII_RS     gmii        = gbe.gmii;
interface Clock       rxclkBnd    = gbe.rxclkBnd;
interface MDIO_Pads   mdio        = gbe.mdio;
endmodule: mkFTop_kc705
