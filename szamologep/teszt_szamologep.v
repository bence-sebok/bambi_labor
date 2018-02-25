`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:46:24 02/21/2018
// Design Name:   szamologep
// Module Name:   C:/Users/Student/BAMBI1/teszt_szamologep.v
// Project Name:  BAMBI1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: szamologep
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module teszt_szamologep;

	// Inputs
	reg clk;
	reg rst;
	reg [7:0] dip_sw;
	reg [3:0] btn;

	// Outputs
	wire [7:0] leds;
	wire [3:0] AN;
	wire [7:0] SEG;

	// Instantiate the Unit Under Test (UUT)
	szamologep uut (
		.clk(clk), 
		.rst(rst), 
		.dip_sw(dip_sw), 
		.btn(btn), 
		.leds(leds), 
		.AN(AN), 
		.SEG(SEG)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		dip_sw = 0;
		btn = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst=0;
		dip_sw=8'b1111_1111;
		
		#100
		btn=4'b0001;
		  
		#100
		btn=4'b0010;
		 
		#100
		btn=4'b0100;
		 
		#200
		btn=4'b1000;
		// Add stimulus here

	end
      always #5
			clk=~clk;
      
endmodule

