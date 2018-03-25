`timescale 1ns / 1ps

module teszt_oszto;

	// Inputs
	reg start;
	reg clk;
	reg rst;
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [3:0] hanyados;
	wire [3:0] maradek;
	wire ready;
	wire hiba;

	// Instantiate the Unit Under Test (UUT)
	oszto uut (
		.start(start), 
		.clk(clk), 
		.rst(rst), 
		.a(a), 
		.b(b), 
		.hanyados(hanyados), 
		.maradek(maradek), 
		.ready(ready),
		.hiba(hiba)
	);

	initial begin
		// Initialize Inputs
		start = 0;
		clk = 0;
		rst = 1;
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 0;
		a = 15;
		b = 5;;
		
		# 10
		start = 1;		
		#10
		start = 0;
	
        
		// Add stimulus here

	end
	
	always #5 clk = ~clk;
      
endmodule

