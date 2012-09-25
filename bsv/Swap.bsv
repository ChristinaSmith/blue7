// Swap.bsv - Swap 6B Destination MAC Addr with 6B Source MAC Addr of ABS L2 Packet, Payload unchanged
// Copyright (c) 2012 Atomic Rules LLC - ALL RIGHTS RESERVED
// Christina Smith
// 2012.09.17

// BSV imports
import GetPut      ::*;
import Connectable ::*;
import FIFO        ::*;

// Other imports
import E8023       ::*;

// Interface
interface SwapIfc;
  interface Put#(ABS)  in;
  interface Get#(ABS)  out;
endinterface: SwapIfc

// Module
(* synthesize *)
module mkSwap (SwapIfc);

// State
FIFO#(ABS)       inF         <- mkFIFO;
FIFO#(ABS)       outF        <- mkFIFO;
Reg#(Bit#(8))    count       <- mkReg(0);
FIFO#(ABS)       firstF      <- mkSizedFIFO(6);
FIFO#(ABS)       secondF     <- mkSizedFIFO(6);
FIFO#(ABS)       thirdF      <- mkFIFO;
Reg#(Bool)       flag        <- mkReg(True);
Reg#(Bool)       payloadOK   <- mkReg(False);

// Rules
rule advance; // Check for EOP, if so reset, else enq FIFOs
  count <= (isEOP(inF.first)) ? 0 : count + 1;
  if(count < 6)
    firstF.enq(inF.first);
  else if(count >= 6 && count < 12)
    secondF.enq(inF.first);
  else thirdF.enq(inF.first);
  if(isEOP(inF.first)) begin
    flag <= True;
    payloadOK <= False;
  end
  inF.deq;
endrule

rule advanceOutput;  // send out SAin as DAout
  outF.enq(secondF.first);
  secondF.deq;
  flag <= False;
endrule

rule advanceOutputTwo(!flag); // send out DAin as SAout
  outF.enq(firstF.first);
  firstF.deq;
  payloadOK <= True;
endrule

rule advanceOutputPayload(payloadOK); // send out Payload
  outF.enq(thirdF.first);
  thirdF.deq;
endrule

// Interfaces provided
interface Put in  = toPut(inF);
interface Get out = toGet(outF);

endmodule: mkSwap
