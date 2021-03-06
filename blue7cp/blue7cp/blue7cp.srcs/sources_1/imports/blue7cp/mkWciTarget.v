//
// Generated by Bluespec Compiler, version 2012.01.A (build 26572, 2012-01-17)
//
// On Thu Sep 20 15:16:15 EDT 2012
//
// Method conflict info:
// Method: wciS0_mCmd
// Conflict-free: wciS0_mAddrSpace,
// 	       wciS0_mByteEn,
// 	       wciS0_mAddr,
// 	       wciS0_mData,
// 	       wciS0_sResp,
// 	       wciS0_sData,
// 	       wciS0_sThreadBusy,
// 	       wciS0_sFlag,
// 	       wciS0_mFlag
// Conflicts: wciS0_mCmd
//
// Method: wciS0_mAddrSpace
// Conflict-free: wciS0_mCmd,
// 	       wciS0_mByteEn,
// 	       wciS0_mAddr,
// 	       wciS0_mData,
// 	       wciS0_sResp,
// 	       wciS0_sData,
// 	       wciS0_sThreadBusy,
// 	       wciS0_sFlag,
// 	       wciS0_mFlag
// Conflicts: wciS0_mAddrSpace
//
// Method: wciS0_mByteEn
// Conflict-free: wciS0_mCmd,
// 	       wciS0_mAddrSpace,
// 	       wciS0_mAddr,
// 	       wciS0_mData,
// 	       wciS0_sResp,
// 	       wciS0_sData,
// 	       wciS0_sThreadBusy,
// 	       wciS0_sFlag,
// 	       wciS0_mFlag
// Conflicts: wciS0_mByteEn
//
// Method: wciS0_mAddr
// Conflict-free: wciS0_mCmd,
// 	       wciS0_mAddrSpace,
// 	       wciS0_mByteEn,
// 	       wciS0_mData,
// 	       wciS0_sResp,
// 	       wciS0_sData,
// 	       wciS0_sThreadBusy,
// 	       wciS0_sFlag,
// 	       wciS0_mFlag
// Conflicts: wciS0_mAddr
//
// Method: wciS0_mData
// Conflict-free: wciS0_mCmd,
// 	       wciS0_mAddrSpace,
// 	       wciS0_mByteEn,
// 	       wciS0_mAddr,
// 	       wciS0_sResp,
// 	       wciS0_sData,
// 	       wciS0_sThreadBusy,
// 	       wciS0_sFlag,
// 	       wciS0_mFlag
// Conflicts: wciS0_mData
//
// Method: wciS0_sResp
// Conflict-free: wciS0_mCmd,
// 	       wciS0_mAddrSpace,
// 	       wciS0_mByteEn,
// 	       wciS0_mAddr,
// 	       wciS0_mData,
// 	       wciS0_sResp,
// 	       wciS0_sData,
// 	       wciS0_sThreadBusy,
// 	       wciS0_sFlag,
// 	       wciS0_mFlag
//
// Method: wciS0_sData
// Conflict-free: wciS0_mCmd,
// 	       wciS0_mAddrSpace,
// 	       wciS0_mByteEn,
// 	       wciS0_mAddr,
// 	       wciS0_mData,
// 	       wciS0_sResp,
// 	       wciS0_sData,
// 	       wciS0_sThreadBusy,
// 	       wciS0_sFlag,
// 	       wciS0_mFlag
//
// Method: wciS0_sThreadBusy
// Conflict-free: wciS0_mCmd,
// 	       wciS0_mAddrSpace,
// 	       wciS0_mByteEn,
// 	       wciS0_mAddr,
// 	       wciS0_mData,
// 	       wciS0_sResp,
// 	       wciS0_sData,
// 	       wciS0_sThreadBusy,
// 	       wciS0_sFlag,
// 	       wciS0_mFlag
//
// Method: wciS0_sFlag
// Conflict-free: wciS0_mCmd,
// 	       wciS0_mAddrSpace,
// 	       wciS0_mByteEn,
// 	       wciS0_mAddr,
// 	       wciS0_mData,
// 	       wciS0_sResp,
// 	       wciS0_sData,
// 	       wciS0_sThreadBusy,
// 	       wciS0_sFlag,
// 	       wciS0_mFlag
//
// Method: wciS0_mFlag
// Conflict-free: wciS0_mCmd,
// 	       wciS0_mAddrSpace,
// 	       wciS0_mByteEn,
// 	       wciS0_mAddr,
// 	       wciS0_mData,
// 	       wciS0_sResp,
// 	       wciS0_sData,
// 	       wciS0_sThreadBusy,
// 	       wciS0_sFlag,
// 	       wciS0_mFlag
//
//
// Ports:
// Name                         I/O  size props
// wciS0_SResp                    O     2 reg
// wciS0_SData                    O    32 reg
// wciS0_SThreadBusy              O     1
// wciS0_SFlag                    O     2
// wciS0_Clk                      I     1 clock
// wciS0_MReset_n                 I     1 reset
// wciS0_MCmd                     I     3
// wciS0_MAddrSpace               I     1
// wciS0_MByteEn                  I     4
// wciS0_MAddr                    I    32
// wciS0_MData                    I    32
// wciS0_MFlag                    I     2 unused
//
// No combinational paths from inputs to outputs
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
`define BSV_ASSIGNMENT_DELAY
`endif

module mkWciTarget(wciS0_Clk,
		   wciS0_MReset_n,

		   wciS0_MCmd,

		   wciS0_MAddrSpace,

		   wciS0_MByteEn,

		   wciS0_MAddr,

		   wciS0_MData,

		   wciS0_SResp,

		   wciS0_SData,

		   wciS0_SThreadBusy,

		   wciS0_SFlag,

		   wciS0_MFlag);
  input  wciS0_Clk;
  input  wciS0_MReset_n;

  // action method wciS0_mCmd
  input  [2 : 0] wciS0_MCmd;

  // action method wciS0_mAddrSpace
  input  wciS0_MAddrSpace;

  // action method wciS0_mByteEn
  input  [3 : 0] wciS0_MByteEn;

  // action method wciS0_mAddr
  input  [31 : 0] wciS0_MAddr;

  // action method wciS0_mData
  input  [31 : 0] wciS0_MData;

  // value method wciS0_sResp
  output [1 : 0] wciS0_SResp;

  // value method wciS0_sData
  output [31 : 0] wciS0_SData;

  // value method wciS0_sThreadBusy
  output wciS0_SThreadBusy;

  // value method wciS0_sFlag
  output [1 : 0] wciS0_SFlag;

  // action method wciS0_mFlag
  input  [1 : 0] wciS0_MFlag;

  // signals for module outputs
  wire [31 : 0] wciS0_SData;
  wire [1 : 0] wciS0_SFlag, wciS0_SResp;
  wire wciS0_SThreadBusy;

  // inlined wires
  wire [71 : 0] target_wciReq$wget;
  wire target_ctlAckReg_1$whas,
       target_reqF_r_deq$whas,
       target_respF_enqueueing$whas,
       target_respF_x_wire$whas,
       target_wci_cfrd_pw$whas,
       target_wci_cfwr_pw$whas,
       target_wci_ctrl_pw$whas;

  // register biasValue
  reg [31 : 0] biasValue;
  wire [31 : 0] biasValue$D_IN;
  wire biasValue$EN;

  // register controlReg
  reg [31 : 0] controlReg;
  wire [31 : 0] controlReg$D_IN;
  wire controlReg$EN;

  // register operating
  reg operating;
  wire operating$D_IN, operating$EN;

  // register target_cEdge
  reg [2 : 0] target_cEdge;
  wire [2 : 0] target_cEdge$D_IN;
  wire target_cEdge$EN;

  // register target_cState
  reg [2 : 0] target_cState;
  wire [2 : 0] target_cState$D_IN;
  wire target_cState$EN;

  // register target_ctlAckReg
  reg target_ctlAckReg;
  wire target_ctlAckReg$D_IN, target_ctlAckReg$EN;

  // register target_ctlOpActive
  reg target_ctlOpActive;
  wire target_ctlOpActive$D_IN, target_ctlOpActive$EN;

  // register target_illegalEdge
  reg target_illegalEdge;
  wire target_illegalEdge$D_IN, target_illegalEdge$EN;

  // register target_isReset_isInReset
  reg target_isReset_isInReset;
  wire target_isReset_isInReset$D_IN, target_isReset_isInReset$EN;

  // register target_nState
  reg [2 : 0] target_nState;
  reg [2 : 0] target_nState$D_IN;
  wire target_nState$EN;

  // register target_reqF_countReg
  reg [1 : 0] target_reqF_countReg;
  wire [1 : 0] target_reqF_countReg$D_IN;
  wire target_reqF_countReg$EN;

  // register target_respF_c_r
  reg [1 : 0] target_respF_c_r;
  wire [1 : 0] target_respF_c_r$D_IN;
  wire target_respF_c_r$EN;

  // register target_respF_q_0
  reg [33 : 0] target_respF_q_0;
  reg [33 : 0] target_respF_q_0$D_IN;
  wire target_respF_q_0$EN;

  // register target_respF_q_1
  reg [33 : 0] target_respF_q_1;
  reg [33 : 0] target_respF_q_1$D_IN;
  wire target_respF_q_1$EN;

  // register target_sFlagReg
  reg target_sFlagReg;
  wire target_sFlagReg$D_IN, target_sFlagReg$EN;

  // register target_sThreadBusy_d
  reg target_sThreadBusy_d;
  wire target_sThreadBusy_d$D_IN, target_sThreadBusy_d$EN;

  // ports of submodule target_reqF
  wire [71 : 0] target_reqF$D_IN, target_reqF$D_OUT;
  wire target_reqF$CLR, target_reqF$DEQ, target_reqF$EMPTY_N, target_reqF$ENQ;

  // rule scheduling signals
  wire CAN_FIRE_RL_report_operating,
       CAN_FIRE_RL_target_cfrd,
       CAN_FIRE_RL_target_cfwr,
       CAN_FIRE_RL_target_ctlAckReg__dreg_update,
       CAN_FIRE_RL_target_ctl_op_complete,
       CAN_FIRE_RL_target_ctl_op_start,
       CAN_FIRE_RL_target_ctrl_EiI,
       CAN_FIRE_RL_target_ctrl_IsO,
       CAN_FIRE_RL_target_ctrl_OrE,
       CAN_FIRE_RL_target_isReset_isResetAssertedUpdate,
       CAN_FIRE_RL_target_reqF__updateLevelCounter,
       CAN_FIRE_RL_target_reqF_enq,
       CAN_FIRE_RL_target_request_decode,
       CAN_FIRE_RL_target_respF_both,
       CAN_FIRE_RL_target_respF_decCtr,
       CAN_FIRE_RL_target_respF_deq,
       CAN_FIRE_RL_target_respF_incCtr,
       CAN_FIRE_RL_target_sFlagReg__dreg_update,
       CAN_FIRE_RL_target_sThreadBusy_reg,
       CAN_FIRE_RL_wci_Es_doAlways_Req,
       CAN_FIRE_wciS0_mAddr,
       CAN_FIRE_wciS0_mAddrSpace,
       CAN_FIRE_wciS0_mByteEn,
       CAN_FIRE_wciS0_mCmd,
       CAN_FIRE_wciS0_mData,
       CAN_FIRE_wciS0_mFlag,
       WILL_FIRE_RL_report_operating,
       WILL_FIRE_RL_target_cfrd,
       WILL_FIRE_RL_target_cfwr,
       WILL_FIRE_RL_target_ctlAckReg__dreg_update,
       WILL_FIRE_RL_target_ctl_op_complete,
       WILL_FIRE_RL_target_ctl_op_start,
       WILL_FIRE_RL_target_ctrl_EiI,
       WILL_FIRE_RL_target_ctrl_IsO,
       WILL_FIRE_RL_target_ctrl_OrE,
       WILL_FIRE_RL_target_isReset_isResetAssertedUpdate,
       WILL_FIRE_RL_target_reqF__updateLevelCounter,
       WILL_FIRE_RL_target_reqF_enq,
       WILL_FIRE_RL_target_request_decode,
       WILL_FIRE_RL_target_respF_both,
       WILL_FIRE_RL_target_respF_decCtr,
       WILL_FIRE_RL_target_respF_deq,
       WILL_FIRE_RL_target_respF_incCtr,
       WILL_FIRE_RL_target_sFlagReg__dreg_update,
       WILL_FIRE_RL_target_sThreadBusy_reg,
       WILL_FIRE_RL_wci_Es_doAlways_Req,
       WILL_FIRE_wciS0_mAddr,
       WILL_FIRE_wciS0_mAddrSpace,
       WILL_FIRE_wciS0_mByteEn,
       WILL_FIRE_wciS0_mCmd,
       WILL_FIRE_wciS0_mData,
       WILL_FIRE_wciS0_mFlag;

  // inputs to muxes for submodule ports
  reg [33 : 0] MUX_target_respF_q_0$write_1__VAL_1;
  wire [33 : 0] MUX_target_respF_q_0$write_1__VAL_2,
		MUX_target_respF_q_1$write_1__VAL_1,
		MUX_target_respF_x_wire$wset_1__VAL_1,
		MUX_target_respF_x_wire$wset_1__VAL_2;
  wire [1 : 0] MUX_target_respF_c_r$write_1__VAL_1,
	       MUX_target_respF_c_r$write_1__VAL_2;
  wire MUX_target_illegalEdge$write_1__SEL_1,
       MUX_target_illegalEdge$write_1__SEL_2,
       MUX_target_illegalEdge$write_1__VAL_2,
       MUX_target_respF_q_0$write_1__SEL_1,
       MUX_target_respF_q_1$write_1__SEL_2;

  // remaining internal signals
  reg [63 : 0] v__h3612, v__h3786, v__h3930, v__h4212, v__h4470, v__h4623;
  reg [31 : 0] _theResult____h4607;

  // action method wciS0_mCmd
  assign CAN_FIRE_wciS0_mCmd = 1'd1 ;
  assign WILL_FIRE_wciS0_mCmd = 1'd1 ;

  // action method wciS0_mAddrSpace
  assign CAN_FIRE_wciS0_mAddrSpace = 1'd1 ;
  assign WILL_FIRE_wciS0_mAddrSpace = 1'd1 ;

  // action method wciS0_mByteEn
  assign CAN_FIRE_wciS0_mByteEn = 1'd1 ;
  assign WILL_FIRE_wciS0_mByteEn = 1'd1 ;

  // action method wciS0_mAddr
  assign CAN_FIRE_wciS0_mAddr = 1'd1 ;
  assign WILL_FIRE_wciS0_mAddr = 1'd1 ;

  // action method wciS0_mData
  assign CAN_FIRE_wciS0_mData = 1'd1 ;
  assign WILL_FIRE_wciS0_mData = 1'd1 ;

  // value method wciS0_sResp
  assign wciS0_SResp = target_respF_q_0[33:32] ;

  // value method wciS0_sData
  assign wciS0_SData = target_respF_q_0[31:0] ;

  // value method wciS0_sThreadBusy
  assign wciS0_SThreadBusy =
	     target_reqF_countReg > 2'd1 || target_isReset_isInReset ;

  // value method wciS0_sFlag
  assign wciS0_SFlag = { 1'd1, target_sFlagReg } ;

  // action method wciS0_mFlag
  assign CAN_FIRE_wciS0_mFlag = 1'd1 ;
  assign WILL_FIRE_wciS0_mFlag = 1'd1 ;

  // submodule target_reqF
  SizedFIFO #(.p1width(32'd72),
	      .p2depth(32'd3),
	      .p3cntr_width(32'd1),
	      .guarded(32'd1)) target_reqF(.RST_N(wciS0_MReset_n),
					   .CLK(wciS0_Clk),
					   .D_IN(target_reqF$D_IN),
					   .ENQ(target_reqF$ENQ),
					   .DEQ(target_reqF$DEQ),
					   .CLR(target_reqF$CLR),
					   .D_OUT(target_reqF$D_OUT),
					   .FULL_N(),
					   .EMPTY_N(target_reqF$EMPTY_N));

  // rule RL_report_operating
  assign CAN_FIRE_RL_report_operating = target_cState == 3'd2 && !operating ;
  assign WILL_FIRE_RL_report_operating = CAN_FIRE_RL_report_operating ;

  // rule RL_target_request_decode
  assign CAN_FIRE_RL_target_request_decode = target_reqF$EMPTY_N ;
  assign WILL_FIRE_RL_target_request_decode = target_reqF$EMPTY_N ;

  // rule RL_target_cfwr
  assign CAN_FIRE_RL_target_cfwr =
	     target_respF_c_r != 2'd2 && target_reqF$EMPTY_N &&
	     target_wci_cfwr_pw$whas ;
  assign WILL_FIRE_RL_target_cfwr = CAN_FIRE_RL_target_cfwr ;

  // rule RL_target_cfrd
  assign CAN_FIRE_RL_target_cfrd =
	     target_respF_c_r != 2'd2 && target_reqF$EMPTY_N &&
	     target_wci_cfrd_pw$whas ;
  assign WILL_FIRE_RL_target_cfrd =
	     CAN_FIRE_RL_target_cfrd && !WILL_FIRE_RL_target_cfwr ;

  // rule RL_target_sThreadBusy_reg
  assign CAN_FIRE_RL_target_sThreadBusy_reg = 1'd1 ;
  assign WILL_FIRE_RL_target_sThreadBusy_reg = 1'd1 ;

  // rule RL_target_respF_deq
  assign CAN_FIRE_RL_target_respF_deq = 1'd1 ;
  assign WILL_FIRE_RL_target_respF_deq = 1'd1 ;

  // rule RL_target_ctl_op_start
  assign CAN_FIRE_RL_target_ctl_op_start =
	     target_reqF$EMPTY_N && target_wci_ctrl_pw$whas ;
  assign WILL_FIRE_RL_target_ctl_op_start =
	     CAN_FIRE_RL_target_ctl_op_start &&
	     !WILL_FIRE_RL_target_ctl_op_complete &&
	     !WILL_FIRE_RL_target_cfrd &&
	     !WILL_FIRE_RL_target_cfwr ;

  // rule RL_target_ctrl_EiI
  assign CAN_FIRE_RL_target_ctrl_EiI =
	     target_wci_ctrl_pw$whas && WILL_FIRE_RL_target_ctl_op_start &&
	     target_cState == 3'd0 &&
	     target_reqF$D_OUT[36:34] == 3'd0 ;
  assign WILL_FIRE_RL_target_ctrl_EiI = CAN_FIRE_RL_target_ctrl_EiI ;

  // rule RL_target_ctrl_IsO
  assign CAN_FIRE_RL_target_ctrl_IsO =
	     target_wci_ctrl_pw$whas && WILL_FIRE_RL_target_ctl_op_start &&
	     target_cState == 3'd1 &&
	     target_reqF$D_OUT[36:34] == 3'd1 ;
  assign WILL_FIRE_RL_target_ctrl_IsO = CAN_FIRE_RL_target_ctrl_IsO ;

  // rule RL_target_ctrl_OrE
  assign CAN_FIRE_RL_target_ctrl_OrE =
	     target_wci_ctrl_pw$whas && WILL_FIRE_RL_target_ctl_op_start &&
	     target_cState == 3'd2 &&
	     target_reqF$D_OUT[36:34] == 3'd3 ;
  assign WILL_FIRE_RL_target_ctrl_OrE = CAN_FIRE_RL_target_ctrl_OrE ;

  // rule RL_target_ctl_op_complete
  assign CAN_FIRE_RL_target_ctl_op_complete =
	     target_respF_c_r != 2'd2 && target_ctlOpActive &&
	     target_ctlAckReg ;
  assign WILL_FIRE_RL_target_ctl_op_complete =
	     CAN_FIRE_RL_target_ctl_op_complete &&
	     !WILL_FIRE_RL_target_cfrd &&
	     !WILL_FIRE_RL_target_cfwr ;

  // rule RL_target_respF_incCtr
  assign CAN_FIRE_RL_target_respF_incCtr =
	     ((target_respF_c_r == 2'd0) ?
		target_respF_x_wire$whas :
		target_respF_c_r != 2'd1 || target_respF_x_wire$whas) &&
	     target_respF_enqueueing$whas &&
	     !(target_respF_c_r != 2'd0) ;
  assign WILL_FIRE_RL_target_respF_incCtr = CAN_FIRE_RL_target_respF_incCtr ;

  // rule RL_target_respF_decCtr
  assign CAN_FIRE_RL_target_respF_decCtr =
	     target_respF_c_r != 2'd0 && !target_respF_enqueueing$whas ;
  assign WILL_FIRE_RL_target_respF_decCtr = CAN_FIRE_RL_target_respF_decCtr ;

  // rule RL_target_respF_both
  assign CAN_FIRE_RL_target_respF_both =
	     ((target_respF_c_r == 2'd1) ?
		target_respF_x_wire$whas :
		target_respF_c_r != 2'd2 || target_respF_x_wire$whas) &&
	     target_respF_c_r != 2'd0 &&
	     target_respF_enqueueing$whas ;
  assign WILL_FIRE_RL_target_respF_both = CAN_FIRE_RL_target_respF_both ;

  // rule RL_target_sFlagReg__dreg_update
  assign CAN_FIRE_RL_target_sFlagReg__dreg_update = 1'd1 ;
  assign WILL_FIRE_RL_target_sFlagReg__dreg_update = 1'd1 ;

  // rule RL_target_ctlAckReg__dreg_update
  assign CAN_FIRE_RL_target_ctlAckReg__dreg_update = 1'd1 ;
  assign WILL_FIRE_RL_target_ctlAckReg__dreg_update = 1'd1 ;

  // rule RL_target_isReset_isResetAssertedUpdate
  assign CAN_FIRE_RL_target_isReset_isResetAssertedUpdate =
	     target_isReset_isInReset ;
  assign WILL_FIRE_RL_target_isReset_isResetAssertedUpdate =
	     target_isReset_isInReset ;

  // rule RL_wci_Es_doAlways_Req
  assign CAN_FIRE_RL_wci_Es_doAlways_Req = 1'd1 ;
  assign WILL_FIRE_RL_wci_Es_doAlways_Req = 1'd1 ;

  // rule RL_target_reqF_enq
  assign CAN_FIRE_RL_target_reqF_enq = target_wciReq$wget[71:69] != 3'd0 ;
  assign WILL_FIRE_RL_target_reqF_enq = CAN_FIRE_RL_target_reqF_enq ;

  // rule RL_target_reqF__updateLevelCounter
  assign CAN_FIRE_RL_target_reqF__updateLevelCounter =
	     (target_wciReq$wget[71:69] != 3'd0) != target_reqF_r_deq$whas ;
  assign WILL_FIRE_RL_target_reqF__updateLevelCounter =
	     CAN_FIRE_RL_target_reqF__updateLevelCounter ;

  // inputs to muxes for submodule ports
  assign MUX_target_illegalEdge$write_1__SEL_1 =
	     WILL_FIRE_RL_target_ctl_op_complete && target_illegalEdge ;
  assign MUX_target_illegalEdge$write_1__SEL_2 =
	     WILL_FIRE_RL_target_ctl_op_start &&
	     (target_reqF$D_OUT[36:34] == 3'd0 && target_cState != 3'd0 ||
	      target_reqF$D_OUT[36:34] == 3'd1 && target_cState != 3'd1 &&
	      target_cState != 3'd3 ||
	      target_reqF$D_OUT[36:34] == 3'd2 && target_cState != 3'd2 ||
	      target_reqF$D_OUT[36:34] == 3'd3 && target_cState != 3'd3 &&
	      target_cState != 3'd2 &&
	      target_cState != 3'd1 ||
	      target_reqF$D_OUT[36:34] == 3'd4 ||
	      target_reqF$D_OUT[36:34] == 3'd5 ||
	      target_reqF$D_OUT[36:34] == 3'd6 ||
	      target_reqF$D_OUT[36:34] == 3'd7) ;
  assign MUX_target_respF_q_0$write_1__SEL_1 =
	     WILL_FIRE_RL_target_respF_incCtr && target_respF_c_r == 2'd0 ;
  assign MUX_target_respF_q_1$write_1__SEL_2 =
	     WILL_FIRE_RL_target_respF_incCtr && target_respF_c_r == 2'd1 ;
  assign MUX_target_illegalEdge$write_1__VAL_2 =
	     target_reqF$D_OUT[36:34] != 3'd4 &&
	     target_reqF$D_OUT[36:34] != 3'd5 &&
	     target_reqF$D_OUT[36:34] != 3'd6 ;
  assign MUX_target_respF_c_r$write_1__VAL_1 = target_respF_c_r + 2'd1 ;
  assign MUX_target_respF_c_r$write_1__VAL_2 = target_respF_c_r - 2'd1 ;
  always@(WILL_FIRE_RL_target_ctl_op_complete or
	  MUX_target_respF_x_wire$wset_1__VAL_1 or
	  WILL_FIRE_RL_target_cfrd or
	  MUX_target_respF_x_wire$wset_1__VAL_2 or WILL_FIRE_RL_target_cfwr)
  begin
    case (1'b1) // synopsys parallel_case
      WILL_FIRE_RL_target_ctl_op_complete:
	  MUX_target_respF_q_0$write_1__VAL_1 =
	      MUX_target_respF_x_wire$wset_1__VAL_1;
      WILL_FIRE_RL_target_cfrd:
	  MUX_target_respF_q_0$write_1__VAL_1 =
	      MUX_target_respF_x_wire$wset_1__VAL_2;
      WILL_FIRE_RL_target_cfwr:
	  MUX_target_respF_q_0$write_1__VAL_1 = 34'h1C0DE4201;
      default: MUX_target_respF_q_0$write_1__VAL_1 =
		   34'h2AAAAAAAA /* unspecified value */ ;
    endcase
  end
  assign MUX_target_respF_q_0$write_1__VAL_2 =
	     (target_respF_c_r == 2'd1) ?
	       MUX_target_respF_q_0$write_1__VAL_1 :
	       target_respF_q_1 ;
  assign MUX_target_respF_q_1$write_1__VAL_1 =
	     (target_respF_c_r == 2'd2) ?
	       MUX_target_respF_q_0$write_1__VAL_1 :
	       34'h0AAAAAAAA ;
  assign MUX_target_respF_x_wire$wset_1__VAL_1 =
	     target_illegalEdge ? 34'h3C0DE4202 : 34'h1C0DE4201 ;
  assign MUX_target_respF_x_wire$wset_1__VAL_2 =
	     { 2'd1, _theResult____h4607 } ;

  // inlined wires
  assign target_wciReq$wget =
	     { wciS0_MCmd,
	       wciS0_MAddrSpace,
	       wciS0_MByteEn,
	       wciS0_MAddr,
	       wciS0_MData } ;
  assign target_respF_x_wire$whas =
	     WILL_FIRE_RL_target_ctl_op_complete ||
	     WILL_FIRE_RL_target_cfrd ||
	     WILL_FIRE_RL_target_cfwr ;
  assign target_ctlAckReg_1$whas =
	     WILL_FIRE_RL_target_ctrl_OrE || WILL_FIRE_RL_target_ctrl_IsO ||
	     WILL_FIRE_RL_target_ctrl_EiI ;
  assign target_reqF_r_deq$whas =
	     WILL_FIRE_RL_target_cfrd || WILL_FIRE_RL_target_cfwr ||
	     WILL_FIRE_RL_target_ctl_op_start ;
  assign target_respF_enqueueing$whas =
	     WILL_FIRE_RL_target_cfrd || WILL_FIRE_RL_target_cfwr ||
	     WILL_FIRE_RL_target_ctl_op_complete ;
  assign target_wci_cfwr_pw$whas =
	     target_reqF$EMPTY_N && target_reqF$D_OUT[68] &&
	     target_reqF$D_OUT[71:69] == 3'd1 ;
  assign target_wci_cfrd_pw$whas =
	     target_reqF$EMPTY_N && target_reqF$D_OUT[68] &&
	     target_reqF$D_OUT[71:69] == 3'd2 ;
  assign target_wci_ctrl_pw$whas =
	     target_reqF$EMPTY_N && !target_reqF$D_OUT[68] &&
	     target_reqF$D_OUT[71:69] == 3'd2 ;

  // register biasValue
  assign biasValue$D_IN =
	     WILL_FIRE_RL_target_ctrl_EiI ? 32'd0 : target_reqF$D_OUT[31:0] ;
  assign biasValue$EN =
	     WILL_FIRE_RL_target_cfwr && target_reqF$D_OUT[39:32] == 8'h0 ||
	     WILL_FIRE_RL_target_ctrl_EiI ;

  // register controlReg
  assign controlReg$D_IN =
	     WILL_FIRE_RL_target_ctrl_EiI ? 32'd0 : target_reqF$D_OUT[31:0] ;
  assign controlReg$EN =
	     WILL_FIRE_RL_target_cfwr && target_reqF$D_OUT[39:32] == 8'h04 ||
	     WILL_FIRE_RL_target_ctrl_EiI ;

  // register operating
  assign operating$D_IN = 1'd1 ;
  assign operating$EN = CAN_FIRE_RL_report_operating ;

  // register target_cEdge
  assign target_cEdge$D_IN = target_reqF$D_OUT[36:34] ;
  assign target_cEdge$EN = WILL_FIRE_RL_target_ctl_op_start ;

  // register target_cState
  assign target_cState$D_IN = target_nState ;
  assign target_cState$EN =
	     WILL_FIRE_RL_target_ctl_op_complete && !target_illegalEdge ;

  // register target_ctlAckReg
  assign target_ctlAckReg$D_IN = target_ctlAckReg_1$whas ;
  assign target_ctlAckReg$EN = 1'd1 ;

  // register target_ctlOpActive
  assign target_ctlOpActive$D_IN = !WILL_FIRE_RL_target_ctl_op_complete ;
  assign target_ctlOpActive$EN =
	     WILL_FIRE_RL_target_ctl_op_complete ||
	     WILL_FIRE_RL_target_ctl_op_start ;

  // register target_illegalEdge
  assign target_illegalEdge$D_IN =
	     !MUX_target_illegalEdge$write_1__SEL_1 &&
	     MUX_target_illegalEdge$write_1__VAL_2 ;
  assign target_illegalEdge$EN =
	     WILL_FIRE_RL_target_ctl_op_complete && target_illegalEdge ||
	     MUX_target_illegalEdge$write_1__SEL_2 ;

  // register target_isReset_isInReset
  assign target_isReset_isInReset$D_IN = 1'd0 ;
  assign target_isReset_isInReset$EN = target_isReset_isInReset ;

  // register target_nState
  always@(target_reqF$D_OUT)
  begin
    case (target_reqF$D_OUT[36:34])
      3'd0: target_nState$D_IN = 3'd1;
      3'd1: target_nState$D_IN = 3'd2;
      3'd2: target_nState$D_IN = 3'd3;
      default: target_nState$D_IN = 3'd0;
    endcase
  end
  assign target_nState$EN =
	     WILL_FIRE_RL_target_ctl_op_start &&
	     (target_reqF$D_OUT[36:34] == 3'd0 && target_cState == 3'd0 ||
	      target_reqF$D_OUT[36:34] == 3'd1 &&
	      (target_cState == 3'd1 || target_cState == 3'd3) ||
	      target_reqF$D_OUT[36:34] == 3'd2 && target_cState == 3'd2 ||
	      target_reqF$D_OUT[36:34] == 3'd3 &&
	      (target_cState == 3'd3 || target_cState == 3'd2 ||
	       target_cState == 3'd1)) ;

  // register target_reqF_countReg
  assign target_reqF_countReg$D_IN =
	     (target_wciReq$wget[71:69] != 3'd0) ?
	       target_reqF_countReg + 2'd1 :
	       target_reqF_countReg - 2'd1 ;
  assign target_reqF_countReg$EN =
	     CAN_FIRE_RL_target_reqF__updateLevelCounter ;

  // register target_respF_c_r
  assign target_respF_c_r$D_IN =
	     WILL_FIRE_RL_target_respF_incCtr ?
	       MUX_target_respF_c_r$write_1__VAL_1 :
	       MUX_target_respF_c_r$write_1__VAL_2 ;
  assign target_respF_c_r$EN =
	     WILL_FIRE_RL_target_respF_incCtr ||
	     WILL_FIRE_RL_target_respF_decCtr ;

  // register target_respF_q_0
  always@(MUX_target_respF_q_0$write_1__SEL_1 or
	  MUX_target_respF_q_0$write_1__VAL_1 or
	  WILL_FIRE_RL_target_respF_both or
	  MUX_target_respF_q_0$write_1__VAL_2 or
	  WILL_FIRE_RL_target_respF_decCtr or target_respF_q_1)
  begin
    case (1'b1) // synopsys parallel_case
      MUX_target_respF_q_0$write_1__SEL_1:
	  target_respF_q_0$D_IN = MUX_target_respF_q_0$write_1__VAL_1;
      WILL_FIRE_RL_target_respF_both:
	  target_respF_q_0$D_IN = MUX_target_respF_q_0$write_1__VAL_2;
      WILL_FIRE_RL_target_respF_decCtr:
	  target_respF_q_0$D_IN = target_respF_q_1;
      default: target_respF_q_0$D_IN = 34'h2AAAAAAAA /* unspecified value */ ;
    endcase
  end
  assign target_respF_q_0$EN =
	     WILL_FIRE_RL_target_respF_incCtr && target_respF_c_r == 2'd0 ||
	     WILL_FIRE_RL_target_respF_both ||
	     WILL_FIRE_RL_target_respF_decCtr ;

  // register target_respF_q_1
  always@(WILL_FIRE_RL_target_respF_both or
	  MUX_target_respF_q_1$write_1__VAL_1 or
	  MUX_target_respF_q_1$write_1__SEL_2 or
	  MUX_target_respF_q_0$write_1__VAL_1 or
	  WILL_FIRE_RL_target_respF_decCtr)
  begin
    case (1'b1) // synopsys parallel_case
      WILL_FIRE_RL_target_respF_both:
	  target_respF_q_1$D_IN = MUX_target_respF_q_1$write_1__VAL_1;
      MUX_target_respF_q_1$write_1__SEL_2:
	  target_respF_q_1$D_IN = MUX_target_respF_q_0$write_1__VAL_1;
      WILL_FIRE_RL_target_respF_decCtr: target_respF_q_1$D_IN = 34'h0AAAAAAAA;
      default: target_respF_q_1$D_IN = 34'h2AAAAAAAA /* unspecified value */ ;
    endcase
  end
  assign target_respF_q_1$EN =
	     WILL_FIRE_RL_target_respF_both ||
	     WILL_FIRE_RL_target_respF_incCtr && target_respF_c_r == 2'd1 ||
	     WILL_FIRE_RL_target_respF_decCtr ;

  // register target_sFlagReg
  assign target_sFlagReg$D_IN = 1'b0 ;
  assign target_sFlagReg$EN = 1'd1 ;

  // register target_sThreadBusy_d
  assign target_sThreadBusy_d$D_IN = 1'b0 ;
  assign target_sThreadBusy_d$EN = 1'd1 ;

  // submodule target_reqF
  assign target_reqF$D_IN = target_wciReq$wget ;
  assign target_reqF$ENQ = CAN_FIRE_RL_target_reqF_enq ;
  assign target_reqF$DEQ = target_reqF_r_deq$whas ;
  assign target_reqF$CLR = 1'b0 ;

  // remaining internal signals
  always@(target_reqF$D_OUT or biasValue or controlReg)
  begin
    case (target_reqF$D_OUT[39:32])
      8'h0: _theResult____h4607 = biasValue;
      8'h04: _theResult____h4607 = controlReg;
      default: _theResult____h4607 = 32'd0;
    endcase
  end

  // handling of inlined registers

  always@(posedge wciS0_Clk)
  begin
    if (!wciS0_MReset_n)
      begin
        operating <= `BSV_ASSIGNMENT_DELAY 1'd0;
	target_cEdge <= `BSV_ASSIGNMENT_DELAY 3'h2;
	target_cState <= `BSV_ASSIGNMENT_DELAY 3'd0;
	target_ctlAckReg <= `BSV_ASSIGNMENT_DELAY 1'd0;
	target_ctlOpActive <= `BSV_ASSIGNMENT_DELAY 1'd0;
	target_illegalEdge <= `BSV_ASSIGNMENT_DELAY 1'd0;
	target_nState <= `BSV_ASSIGNMENT_DELAY 3'd0;
	target_reqF_countReg <= `BSV_ASSIGNMENT_DELAY 2'd0;
	target_respF_c_r <= `BSV_ASSIGNMENT_DELAY 2'd0;
	target_respF_q_0 <= `BSV_ASSIGNMENT_DELAY 34'h0AAAAAAAA;
	target_respF_q_1 <= `BSV_ASSIGNMENT_DELAY 34'h0AAAAAAAA;
	target_sFlagReg <= `BSV_ASSIGNMENT_DELAY 1'd0;
	target_sThreadBusy_d <= `BSV_ASSIGNMENT_DELAY 1'd1;
      end
    else
      begin
        if (operating$EN) operating <= `BSV_ASSIGNMENT_DELAY operating$D_IN;
	if (target_cEdge$EN)
	  target_cEdge <= `BSV_ASSIGNMENT_DELAY target_cEdge$D_IN;
	if (target_cState$EN)
	  target_cState <= `BSV_ASSIGNMENT_DELAY target_cState$D_IN;
	if (target_ctlAckReg$EN)
	  target_ctlAckReg <= `BSV_ASSIGNMENT_DELAY target_ctlAckReg$D_IN;
	if (target_ctlOpActive$EN)
	  target_ctlOpActive <= `BSV_ASSIGNMENT_DELAY target_ctlOpActive$D_IN;
	if (target_illegalEdge$EN)
	  target_illegalEdge <= `BSV_ASSIGNMENT_DELAY target_illegalEdge$D_IN;
	if (target_nState$EN)
	  target_nState <= `BSV_ASSIGNMENT_DELAY target_nState$D_IN;
	if (target_reqF_countReg$EN)
	  target_reqF_countReg <= `BSV_ASSIGNMENT_DELAY
	      target_reqF_countReg$D_IN;
	if (target_respF_c_r$EN)
	  target_respF_c_r <= `BSV_ASSIGNMENT_DELAY target_respF_c_r$D_IN;
	if (target_respF_q_0$EN)
	  target_respF_q_0 <= `BSV_ASSIGNMENT_DELAY target_respF_q_0$D_IN;
	if (target_respF_q_1$EN)
	  target_respF_q_1 <= `BSV_ASSIGNMENT_DELAY target_respF_q_1$D_IN;
	if (target_sFlagReg$EN)
	  target_sFlagReg <= `BSV_ASSIGNMENT_DELAY target_sFlagReg$D_IN;
	if (target_sThreadBusy_d$EN)
	  target_sThreadBusy_d <= `BSV_ASSIGNMENT_DELAY
	      target_sThreadBusy_d$D_IN;
      end
    if (biasValue$EN) biasValue <= `BSV_ASSIGNMENT_DELAY biasValue$D_IN;
    if (controlReg$EN) controlReg <= `BSV_ASSIGNMENT_DELAY controlReg$D_IN;
  end

  always@(posedge wciS0_Clk or negedge wciS0_MReset_n)
  if (!wciS0_MReset_n)
    begin
      target_isReset_isInReset <= `BSV_ASSIGNMENT_DELAY 1'd1;
    end
  else
    begin
      if (target_isReset_isInReset$EN)
	target_isReset_isInReset <= `BSV_ASSIGNMENT_DELAY
	    target_isReset_isInReset$D_IN;
    end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    biasValue = 32'hAAAAAAAA;
    controlReg = 32'hAAAAAAAA;
    operating = 1'h0;
    target_cEdge = 3'h2;
    target_cState = 3'h2;
    target_ctlAckReg = 1'h0;
    target_ctlOpActive = 1'h0;
    target_illegalEdge = 1'h0;
    target_isReset_isInReset = 1'h0;
    target_nState = 3'h2;
    target_reqF_countReg = 2'h2;
    target_respF_c_r = 2'h2;
    target_respF_q_0 = 34'h2AAAAAAAA;
    target_respF_q_1 = 34'h2AAAAAAAA;
    target_sFlagReg = 1'h0;
    target_sThreadBusy_d = 1'h0;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on

  // handling of system tasks

  // synopsys translate_off
  always@(negedge wciS0_Clk)
  begin
    #0;
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_report_operating)
	begin
	  v__h4212 = $time;
	  #0;
	end
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_report_operating)
	$display("[%0d]: %m: WCI Target is Operating", v__h4212);
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_target_cfwr)
	begin
	  v__h4470 = $time;
	  #0;
	end
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_target_cfwr)
	$display("[%0d]: %m: WCI TARGET CONFIG WRITE Addr:%0x BE:%0x Data:%0x",
		 v__h4470,
		 target_reqF$D_OUT[63:32],
		 target_reqF$D_OUT[67:64],
		 target_reqF$D_OUT[31:0]);
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_target_cfrd)
	begin
	  v__h4623 = $time;
	  #0;
	end
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_target_cfrd)
	$display("[%0d]: %m: WCI TARGET CONFIG READ Addr:%0x BE:%0x Data:%0x",
		 v__h4623,
		 target_reqF$D_OUT[63:32],
		 target_reqF$D_OUT[67:64],
		 _theResult____h4607);
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_target_ctl_op_start)
	begin
	  v__h3612 = $time;
	  #0;
	end
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_target_ctl_op_start)
	$display("[%0d]: %m: WCI ControlOp: Starting-transition edge:%x from:%x",
		 v__h3612,
		 target_reqF$D_OUT[36:34],
		 target_cState);
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_target_ctl_op_complete && target_illegalEdge)
	begin
	  v__h3930 = $time;
	  #0;
	end
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_target_ctl_op_complete && target_illegalEdge)
	$display("[%0d]: %m: WCI ControlOp: ILLEGAL-EDGE Completed-transition edge:%x from:%x",
		 v__h3930,
		 target_cEdge,
		 target_cState);
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_target_ctl_op_complete && !target_illegalEdge)
	begin
	  v__h3786 = $time;
	  #0;
	end
    if (wciS0_MReset_n)
      if (WILL_FIRE_RL_target_ctl_op_complete && !target_illegalEdge)
	$display("[%0d]: %m: WCI ControlOp: Completed-transition edge:%x from:%x to:%x",
		 v__h3786,
		 target_cEdge,
		 target_cState,
		 target_nState);
  end
  // synopsys translate_on
endmodule  // mkWciTarget

