`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:35:40 02/07/2018
// Design Name:   szamologep
// Module Name:   C:/Users/Student/BAMBI1/calc_test.v
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

module calc_test;

	// Inputs
	reg clk;
	reg rst;
	reg [7:0] dip_sw;
	reg [3:0] btn;

	// Outputs
	wire [7:0] leds;

	// Instantiate the Unit Under Test (UUT)
	szamologep uut (
		.clk(clk), 
		.rst(rst), 
		.dip_sw(dip_sw), 
		.btn(btn), 
		.leds(leds)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		dip_sw = 0;
		btn = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		// opA = 
		dip_sw = 8'b0010_0001;
		
		#50;
		btn = 4'b0001;
		
		#50;
		btn = 4'b0010;
		
		#50;
		btn = 4'b0100;
		
		#50;
		btn = 4'b1000;
        
		// Add stimulus here
	end
	
	// Órajel elõállítása
	always #5 clk = ~clk;
      
endmodule

