//
// Generated by Bluespec Compiler, version 2012.01.A (build 26572, 2012-01-17)
//
// On Fri Sep 21 11:05:45 EDT 2012
//
// Method conflict info:
// Method: s_request_put
// Conflict-free: s_response_get,
// 	       c0_request_get,
// 	       c0_response_put,
// 	       c1_request_get,
// 	       c1_response_put
// Conflicts: s_request_put
//
// Method: s_response_get
// Conflict-free: s_request_put,
// 	       c0_request_get,
// 	       c0_response_put,
// 	       c1_request_get,
// 	       c1_response_put
// Conflicts: s_response_get
//
// Method: c0_request_get
// Conflict-free: s_request_put,
// 	       s_response_get,
// 	       c0_response_put,
// 	       c1_request_get,
// 	       c1_response_put
// Conflicts: c0_request_get
//
// Method: c0_response_put
// Conflict-free: s_request_put,
// 	       s_response_get,
// 	       c0_request_get,
// 	       c1_request_get,
// 	       c1_response_put
// Conflicts: c0_response_put
//
// Method: c1_request_get
// Conflict-free: s_request_put,
// 	       s_response_get,
// 	       c0_request_get,
// 	       c0_response_put,
// 	       c1_response_put
// Conflicts: c1_request_get
//
// Method: c1_response_put
// Conflict-free: s_request_put,
// 	       s_response_get,
// 	       c0_request_get,
// 	       c0_response_put,
// 	       c1_request_get
// Conflicts: c1_response_put
//
//
// Ports:
// Name                         I/O  size props
// RDY_s_request_put              O     1 reg
// s_response_get                 O   153 reg
// RDY_s_response_get             O     1 reg
// c0_request_get                 O   153 reg
// RDY_c0_request_get             O     1 reg
// RDY_c0_response_put            O     1 reg
// c1_request_get                 O   153 reg
// RDY_c1_request_get             O     1 reg
// RDY_c1_response_put            O     1 reg
// pfk                            I    14
// CLK                            I     1 clock
// RST_N                          I     1 reset
// s_request_put                  I   153 reg
// c0_response_put                I   153 reg
// c1_response_put                I   153 reg
// EN_s_request_put               I     1
// EN_c0_response_put             I     1
// EN_c1_response_put             I     1
// EN_s_response_get              I     1
// EN_c0_request_get              I     1
// EN_c1_request_get              I     1
//
// No combinational paths from inputs to outputs
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
`define BSV_ASSIGNMENT_DELAY
`endif

module mkTLPSM(pfk,
	       CLK,
	       RST_N,

	       s_request_put,
	       EN_s_request_put,
	       RDY_s_request_put,

	       EN_s_response_get,
	       s_response_get,
	       RDY_s_response_get,

	       EN_c0_request_get,
	       c0_request_get,
	       RDY_c0_request_get,

	       c0_response_put,
	       EN_c0_response_put,
	       RDY_c0_response_put,

	       EN_c1_request_get,
	       c1_request_get,
	       RDY_c1_request_get,

	       c1_response_put,
	       EN_c1_response_put,
	       RDY_c1_response_put);
  input  [13 : 0] pfk;
  input  CLK;
  input  RST_N;

  // action method s_request_put
  input  [152 : 0] s_request_put;
  input  EN_s_request_put;
  output RDY_s_request_put;

  // actionvalue method s_response_get
  input  EN_s_response_get;
  output [152 : 0] s_response_get;
  output RDY_s_response_get;

  // actionvalue method c0_request_get
  input  EN_c0_request_get;
  output [152 : 0] c0_request_get;
  output RDY_c0_request_get;

  // action method c0_response_put
  input  [152 : 0] c0_response_put;
  input  EN_c0_response_put;
  output RDY_c0_response_put;

  // actionvalue method c1_request_get
  input  EN_c1_request_get;
  output [152 : 0] c1_request_get;
  output RDY_c1_request_get;

  // action method c1_response_put
  input  [152 : 0] c1_response_put;
  input  EN_c1_response_put;
  output RDY_c1_response_put;

  // signals for module outputs
  wire [152 : 0] c0_request_get, c1_request_get, s_response_get;
  wire RDY_c0_request_get,
       RDY_c0_response_put,
       RDY_c1_request_get,
       RDY_c1_response_put,
       RDY_s_request_put,
       RDY_s_response_get;

  // ports of submodule pktFork
  wire [152 : 0] pktFork$iport_put, pktFork$oport0_get, pktFork$oport1_get;
  wire pktFork$EN_iport_put,
       pktFork$EN_oport0_get,
       pktFork$EN_oport1_get,
       pktFork$RDY_iport_put,
       pktFork$RDY_oport0_get,
       pktFork$RDY_oport1_get;

  // ports of submodule pktMerge
  wire [152 : 0] pktMerge$iport0_put, pktMerge$iport1_put, pktMerge$oport_get;
  wire pktMerge$EN_iport0_put,
       pktMerge$EN_iport1_put,
       pktMerge$EN_oport_get,
       pktMerge$RDY_iport0_put,
       pktMerge$RDY_iport1_put,
       pktMerge$RDY_oport_get;

  // rule scheduling signals
  wire CAN_FIRE_c0_request_get,
       CAN_FIRE_c0_response_put,
       CAN_FIRE_c1_request_get,
       CAN_FIRE_c1_response_put,
       CAN_FIRE_s_request_put,
       CAN_FIRE_s_response_get,
       WILL_FIRE_c0_request_get,
       WILL_FIRE_c0_response_put,
       WILL_FIRE_c1_request_get,
       WILL_FIRE_c1_response_put,
       WILL_FIRE_s_request_put,
       WILL_FIRE_s_response_get;

  // remaining internal signals
  reg [1 : 0] CASE_pfk_BITS_13_TO_12_3_0_pfk_BITS_13_TO_12_1_ETC__q1;
  wire [13 : 0] IF_pfk_BITS_13_TO_12_EQ_0_OR_pfk_BITS_13_TO_12_ETC___d11;

  // action method s_request_put
  assign RDY_s_request_put = pktFork$RDY_iport_put ;
  assign CAN_FIRE_s_request_put = pktFork$RDY_iport_put ;
  assign WILL_FIRE_s_request_put = EN_s_request_put ;

  // actionvalue method s_response_get
  assign s_response_get = pktMerge$oport_get ;
  assign RDY_s_response_get = pktMerge$RDY_oport_get ;
  assign CAN_FIRE_s_response_get = pktMerge$RDY_oport_get ;
  assign WILL_FIRE_s_response_get = EN_s_response_get ;

  // actionvalue method c0_request_get
  assign c0_request_get = pktFork$oport0_get ;
  assign RDY_c0_request_get = pktFork$RDY_oport0_get ;
  assign CAN_FIRE_c0_request_get = pktFork$RDY_oport0_get ;
  assign WILL_FIRE_c0_request_get = EN_c0_request_get ;

  // action method c0_response_put
  assign RDY_c0_response_put = pktMerge$RDY_iport0_put ;
  assign CAN_FIRE_c0_response_put = pktMerge$RDY_iport0_put ;
  assign WILL_FIRE_c0_response_put = EN_c0_response_put ;

  // actionvalue method c1_request_get
  assign c1_request_get = pktFork$oport1_get ;
  assign RDY_c1_request_get = pktFork$RDY_oport1_get ;
  assign CAN_FIRE_c1_request_get = pktFork$RDY_oport1_get ;
  assign WILL_FIRE_c1_request_get = EN_c1_request_get ;

  // action method c1_response_put
  assign RDY_c1_response_put = pktMerge$RDY_iport1_put ;
  assign CAN_FIRE_c1_response_put = pktMerge$RDY_iport1_put ;
  assign WILL_FIRE_c1_response_put = EN_c1_response_put ;

  // submodule pktFork
  mkPktFork pktFork(.pfk(IF_pfk_BITS_13_TO_12_EQ_0_OR_pfk_BITS_13_TO_12_ETC___d11),
		    .CLK(CLK),
		    .RST_N(RST_N),
		    .iport_put(pktFork$iport_put),
		    .EN_iport_put(pktFork$EN_iport_put),
		    .EN_oport0_get(pktFork$EN_oport0_get),
		    .EN_oport1_get(pktFork$EN_oport1_get),
		    .RDY_iport_put(pktFork$RDY_iport_put),
		    .oport0_get(pktFork$oport0_get),
		    .RDY_oport0_get(pktFork$RDY_oport0_get),
		    .oport1_get(pktFork$oport1_get),
		    .RDY_oport1_get(pktFork$RDY_oport1_get));

  // submodule pktMerge
  mkPktMerge pktMerge(.CLK(CLK),
		      .RST_N(RST_N),
		      .iport0_put(pktMerge$iport0_put),
		      .iport1_put(pktMerge$iport1_put),
		      .EN_iport0_put(pktMerge$EN_iport0_put),
		      .EN_iport1_put(pktMerge$EN_iport1_put),
		      .EN_oport_get(pktMerge$EN_oport_get),
		      .RDY_iport0_put(pktMerge$RDY_iport0_put),
		      .RDY_iport1_put(pktMerge$RDY_iport1_put),
		      .oport_get(pktMerge$oport_get),
		      .RDY_oport_get(pktMerge$RDY_oport_get));

  // submodule pktFork
  assign pktFork$iport_put = s_request_put ;
  assign pktFork$EN_iport_put = EN_s_request_put ;
  assign pktFork$EN_oport0_get = EN_c0_request_get ;
  assign pktFork$EN_oport1_get = EN_c1_request_get ;

  // submodule pktMerge
  assign pktMerge$iport0_put = c0_response_put ;
  assign pktMerge$iport1_put = c1_response_put ;
  assign pktMerge$EN_iport0_put = EN_c0_response_put ;
  assign pktMerge$EN_iport1_put = EN_c1_response_put ;
  assign pktMerge$EN_oport_get = EN_s_response_get ;

  // remaining internal signals
  assign IF_pfk_BITS_13_TO_12_EQ_0_OR_pfk_BITS_13_TO_12_ETC___d11 =
	     { CASE_pfk_BITS_13_TO_12_3_0_pfk_BITS_13_TO_12_1_ETC__q1,
	       pfk[11:0] } ;
  always@(pfk)
  begin
    case (pfk[13:12])
      2'd0, 2'd1, 2'd2:
	  CASE_pfk_BITS_13_TO_12_3_0_pfk_BITS_13_TO_12_1_ETC__q1 = pfk[13:12];
      2'd3: CASE_pfk_BITS_13_TO_12_3_0_pfk_BITS_13_TO_12_1_ETC__q1 = 2'd3;
    endcase
  end
endmodule  // mkTLPSM

