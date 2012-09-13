// fpgaTop_kc705.v - the top-level Verilog for the Xilinx KC705 board
// Copyright (c) 2011-2012 Atomic Rules LLC - ALL RIGHTS RESERVED
//

module fpgaTop (
  input  wire        sys0_clkp,      // sys0 Clock +
  input  wire        sys0_clkn,      // sys0 Clock -
  input  wire        sys0_rst,       // sys0 Reset (active high)

//  output wire [3:0]  lcd_db,
//  output wire        lcd_e,
//  output wire        lcd_rs,
//  output wire        lcd_rw,

  output wire        gmii_rstn,      // Alaska GMII...
	output wire        gmii_gtx_clk,
	output wire [7:0]  gmii_txd,
	output wire        gmii_tx_en,
	output wire        gmii_tx_er,
	input  wire        gmii_rx_clk,
	input  wire [7:0]  gmii_rxd,
	input  wire        gmii_rx_dv,
	input  wire        gmii_rx_er,
  output wire        mdio_mdc,       // Alaska MDIO...
  inout  wire        mdio_mdd 

);

//ECO here
wire sys0_clk;
IBUFGDS clock_buf( .O(sys0_clk), .I(sys0_clkp), .IB(sys0_clkn));

// Instance and connect mkFTop...
 mkFTop_led705 ftop(
  .sys0_clk          (sys0_clk),
  .sys0_rstn         (!sys0_rst),   // Invert to make active-low

//  .lcd_db            (lcd_db),
//  .lcd_e             (lcd_e),
//  .lcd_rs            (lcd_rs),
//  .lcd_rw            (lcd_rw),

  .gmii_rstn         (gmii_rstn),
  .gmii_tx_txd       (gmii_txd),
  .gmii_tx_tx_en     (gmii_tx_en),
  .gmii_tx_tx_er     (gmii_tx_er),
  .gmii_rx_rxd_i     (gmii_rxd),
  .gmii_rx_rx_dv_i   (gmii_rx_dv),
  .gmii_rx_rx_er_i   (gmii_rx_er),
  .gmii_tx_tx_clk    (gmii_gtx_clk),
  .gmii_rx_clk       (gmii_rx_clk),
  .mdio_mdc          (mdio_mdc),
  .mdio_mdd          (mdio_mdd)
);

endmodule
