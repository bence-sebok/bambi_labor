`timescale 1ns / 1ps

module test_top_modul;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] dip_sw;
	reg [3:0] btn;

	// Outputs
	wire [7:0] leds;

	// Instantiate the Unit Under Test (UUT)
	szamologep uut (
		.clk(clk), 
		.reset(reset), 
		.dip_sw(dip_sw), 
		.btn(btn), 
		.leds(leds)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		dip_sw = 0;
		btn = 0;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 0;
		// Add stimulus here
		// ************* opA ************
		dip_sw = 15;
		btn = 8;
		#50
		//btn = 0;
		#100
		// ******************************
		
		// ************* op ************
		dip_sw = 1;
		btn = 4;
		#50
		//btn = 0;
		#100
		// ******************************
		
		// ************* opB ************
		dip_sw = 3;
		btn = 2;
		#50
		//btn = 0;
		#100
		// ******************************
		btn = 1;
		//btn = 0;
	end

	always #5 clk = ~clk;

endmodule

