`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:42:11 02/07/2018 
// Design Name: 
// Module Name:    mux 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mux(
	 input rst,
    input [3:0] sel,
    output reg[2:0] out
);

always@(*)
if(rst)
	out <= IDLE;
else
begin
	case(sel)
		4'b0001: out<=ADD;
		4'b0010: out<=SUB;
		4'b0100: out<=MUL;
		4'b1000: out<=XOR;
		default: out <= IDLE;
	endcase
end

endmodule
