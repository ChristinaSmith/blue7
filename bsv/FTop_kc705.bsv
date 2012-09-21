// FTop_kc705.bsv - the top level module
// Copyright (c) 2012 Atomic Rules LLC - ALL RIGHTS RESERVED
// Christina Smith
// 2012.09.12

//BSV imports
import GetPut          ::*;
import Connectable     ::*;
//import LCDController   ::*;
import FIFO            ::*;
import Clocks          ::*;
import XilinxCells     ::*;
// Other Imports
import GMAC            ::*;
import MDIO            ::*;
import XilinxExtra     ::*;
import Swap            ::*;

// Interface
interface FTop_kc705Ifc;
//  interface LCD         lcd;
  interface Reset       gmii_rstn;    // GMII Reset driven out to Phy
  interface Clock       rxclkBnd;     // GMII RX Clock (provided here for BSV interface rules)  
  interface GMII_RS     gmii;         // The GMII link RX/TX
  interface MDIO_Pads   mdio;         // The MDIO pads
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
//LCDController lcd_ctrl   <- mkLCDController(clocked_by sys0_clk, reset_by sys0_rst);
GMACIfc         gmac       <- mkGMAC(gmii_rx_clk, sys1_clk, clocked_by sys1_clk, reset_by sys1_rst);
MDIO            mdi        <- mkMDIO(6, clocked_by sys1_clk, reset_by sys1_rst);
SwapIfc         swap       <- mkSwap(clocked_by sys1_clk, reset_by sys1_rst);

// Rules
rule gmacOperate;
  gmac.txOperate;
  gmac.rxOperate;
endrule

// Connections
mkConnection(gmac.tx, swap.out);
mkConnection(swap.in, gmac.rx);


// interfaces provided here
//interface LCD       lcd         = lcd_ctrl.ifc;
interface Reset       gmii_rstn   = sys1_rst;
interface GMII_RS     gmii        = gmac.gmii;
interface Clock       rxclkBnd    = gmac.rxclkBnd;
interface MDIO_Pads   mdio        = mdi.mdio;
endmodule: mkFTop_kc705
