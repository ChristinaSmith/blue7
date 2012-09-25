// FTop_Swap.bsv - the top level module to swap L2 destination addr with source addr
// Copyright (c) 2012 Atomic Rules LLC - ALL RIGHTS RESERVED
// Christina Smith
// 2012.09.17

// BSV imports
import GetPut      ::*;
import Connectable ::*;
import FIFO        ::*;
import Clocks      ::*;
// Other imports
import E8023       ::*;

// Interface
interface FTop_SwapIfc;
  interface Put#(ABS)  in;
  interface Get#(ABS)  out;
endinterface: FTop_SwapIfc
// Module
(* synthesize *)
module mkFTop_Swap (FTop_SwapIfc);

// State
FIFO#(ABS)  inF    <- mkFIFO;
FIFO#(ABS)  outF   <- mkFIFO;

// Rules
rule advance;
  outF.enq(inF.first());
  inF.deq;
endrule

//mkConnection(toGet(inF), toPut(outF));

// Interfaces provided
interface Put in  = toPut(inF);
interface Get out = toGet(outF);

endmodule: mkFTop_Swap
