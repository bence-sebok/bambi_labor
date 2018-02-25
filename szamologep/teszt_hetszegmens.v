`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:26:32 02/21/2018
// Design Name:   hetszegmens
// Module Name:   C:/Users/Student/BAMBI1/teszt_hetszegmens.v
// Project Name:  BAMBI1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: hetszegmens
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module teszt_hetszegmens;

	// Inputs
	reg clk;
	reg rst;
	reg [3:0] din0;
	reg [3:0] din1;

	// Outputs
	wire [3:0] AN;
	wire [7:0] SEG;

	// Instantiate the Unit Under Test (UUT)
	hetszegmens uut (
		.clk(clk), 
		.rst(rst), 
		.din0(din0), 
		.din1(din1), 
		.AN(AN), 
		.SEG(SEG)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		din0 = 0;
		din1 = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 0;
		
		#10
		din0 <= 7;
		din1 <= 3;
        
		// Add stimulus here

	end
	
	// órajel
	always #5 clk = ~clk;
      
endmodule

