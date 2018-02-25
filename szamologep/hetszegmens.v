module hetszegmens
(
   input clk,
   input rst,
   input [3:0] din0,
   input [3:0] din1,
	input [3:0] din2,
   output [3:0] AN,
   output [7:0] SEG
);

// rategen
// 16 MHz ---> 1 kHz: 0...15_999 ---> log2(15999) felso egészrésze: 14 bites regiszter
wire en;
reg [13:0] szamlalo;
always @ (posedge clk)
	if(rst)
		szamlalo <= 0;
	else
		szamlalo <= szamlalo + 1;
		
assign en = (szamlalo == 18_999);

// 4 bites shift register
// Ha engedélyezve van, akkor balra shiftel.
// rst hatására legyen az értéke 1110.
reg [3:0] shift_register = 4'b1110;
always @ (posedge clk)
	if(rst)
		shift_register <= 4'b1110;
	else if(en)
		shift_register <= {shift_register[2:0], shift_register[3]};
		
assign AN = shift_register;


// 3 bit counter
reg [2:0] cntr;
always @ (posedge clk)
	if(rst)
		cntr <= 0;
	else if(en)
		cntr <= cntr + 1;
		
reg [3:0] dmux;

always @ (*)
	case (cntr)
	3'b000: dmux <= din0;
	3'b001: dmux <= din1;
	3'b010: dmux <= din2;
	default: dmux <= 0;
	endcase

//segment decoder
reg [7:0] SEG_DEC;
always @(dmux)
	case (dmux)
		4'h0:    SEG_DEC <= 8'b00000011;
		4'h1:    SEG_DEC <= 8'b10011111;
		4'h2:    SEG_DEC <= 8'b00100101;
		4'h3:    SEG_DEC <= 8'b00001101;
		4'h4:    SEG_DEC <= 8'b10011001;
		4'h5:    SEG_DEC <= 8'b01001001;
		4'h6:    SEG_DEC <= 8'b01000001;
		4'h7:    SEG_DEC <= 8'b00011111;
		4'h8:    SEG_DEC <= 8'b00000001;
		4'h9:    SEG_DEC <= 8'b00001001;
		default: SEG_DEC <= 8'b11111111;
	endcase

assign SEG = SEG_DEC;

endmodule