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

// Other Imports
import GMAC            ::*;
import MDIO            ::*;
import XilinxExtra     ::*;

// Interface
interface FTop_kc705Ifc;
//  interface LCD         lcd;
  interface Clock       rxclkBnd;     // GMII RX Clock (provided here for BSV interface rules)  
  interface GMII_RS     gmii;         // The GMII link RX/TX
  interface MDIO_Pads   mdio;         // The MDIO pads
endinterface: FTop_kc705Ifc

// Module
module mkFTop_kc705#(Clock rxClk, Clock txClk)(FTop_kc705Ifc);

// State
//LCDController lcd_ctrl   <- mkLCDController;
GMACIfc         gmac       <- mkGMAC(rxClk, txClk);
MDIO            mdi        <- mkMDIO(6);

// Rules


// Connections
mkConnection(gmac.tx, gmac.rx);

// interfaces provided here
//interface LCD       lcd         = lcd_ctrl.ifc;
interface GMII_RS     gmii        = gmac.gmii;
interface Clock       rxclkBnd    = gmac.rxclkBnd;
interface MDIO_Pads   mdio        = mdi.mdio;
endmodule: mkFTop_kc705
