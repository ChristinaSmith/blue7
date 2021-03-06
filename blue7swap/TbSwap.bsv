// TbSwap.bsv - Send in two L2 packets to test function of Swap.bsv
import StmtFSM     ::*;
import Swap        ::*;
import E8023       ::*;
import FIFO        ::*;
import Connectable ::*;
import GetPut      ::*;

(* synthesize *)
module mkTbSwap(Empty);

SwapIfc        dut      <- mkSwap;
Reg#(Bit#(16)) ccounter <- mkReg(0);
FIFO#(ABS)     genF     <- mkFIFO;
Reg#(Bool)     startFSM <- mkReg(True);
Reg#(Bool)     tmp      <- mkRegU;

rule increment;
  ccounter <= ccounter + 1;
endrule

Stmt genPacket = seq
   genF.enq(tagged ValidNotEOP 8'h00);
   genF.enq(tagged ValidNotEOP 8'h01);
   genF.enq(tagged ValidNotEOP 8'h02);
   genF.enq(tagged ValidNotEOP 8'h03);
   genF.enq(tagged ValidNotEOP 8'h04);
   genF.enq(tagged ValidNotEOP 8'h05);

   genF.enq(tagged ValidNotEOP 8'h10);
   genF.enq(tagged ValidNotEOP 8'h11);
   genF.enq(tagged ValidNotEOP 8'h12);
   genF.enq(tagged ValidNotEOP 8'h13);
   genF.enq(tagged ValidNotEOP 8'h14);
   genF.enq(tagged ValidNotEOP 8'h15);

   genF.enq(tagged ValidNotEOP 8'h42);
   genF.enq(tagged ValidNotEOP 8'h43);
   genF.enq(tagged ValidNotEOP 8'h44);
   genF.enq(tagged ValidEOP 8'h45);

   tmp <= ?;

   tmp <= ?;
   tmp <= ?;


   tmp <= ?;
   tmp <= ?;
   tmp <= ?;
   tmp <= ?;




   genF.enq(tagged ValidNotEOP 8'h20);
   genF.enq(tagged ValidNotEOP 8'h21);
   genF.enq(tagged ValidNotEOP 8'h22);
   genF.enq(tagged ValidNotEOP 8'h23);
   genF.enq(tagged ValidNotEOP 8'h24);
   genF.enq(tagged ValidNotEOP 8'h25);

   genF.enq(tagged ValidNotEOP 8'h30);
   genF.enq(tagged ValidNotEOP 8'h31);
   genF.enq(tagged ValidNotEOP 8'h32);
   genF.enq(tagged ValidNotEOP 8'h33);
   genF.enq(tagged ValidNotEOP 8'h34);
   genF.enq(tagged ValidNotEOP 8'h35);

   genF.enq(tagged ValidNotEOP 8'h52);
   genF.enq(tagged ValidNotEOP 8'h53);
   genF.enq(tagged ValidNotEOP 8'h54);
   genF.enq(tagged ValidEOP 8'h55);

   endseq;

FSM genPacketFsm <- mkFSM(genPacket);

rule genData(startFSM);
    genPacketFsm.start;
    startFSM <= False;
endrule

rule displayData;
  let v <- dut.out.get;
  $display("%h",getData(v));
endrule

mkConnection(toGet(genF), dut.in);

rule finish(ccounter == 100);
  $finish;

endrule

endmodule
