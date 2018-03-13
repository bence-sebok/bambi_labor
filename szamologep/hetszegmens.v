module hetszegmens
(
   input clk,
   input rst,
   input [3:0] din0,
   input [3:0] din1,
	input [3:0] din2,
	input [3:0] din3,
   output [3:0] AN,
   output [7:0] SEG
);

wire en;
reg [3:0] reg_din0;
reg [3:0] reg_din1;
reg [3:0] reg_din2;
reg [3:0] reg_din3;

// 3 digit mintavételezése órajelenként:
always @ (posedge clk)
begin
	if(rst)
		begin
			reg_din0 <= 0;
			reg_din1 <= 0;
			reg_din2 <= 0;
			reg_din3 <= 0;
		end
	else if(en)
		begin
			reg_din0 <= din0;
			reg_din1 <= din1;
			reg_din2 <= din2;
			reg_din3 <= din3;
		end
end

// rategen
// 16 MHz ---> 1 kHz: 0...15_999 ---> log2(15999) felso egészrésze: 14 bites regiszter
reg [13:0] szamlalo;
always @ (posedge clk)
	if(rst | en)
		szamlalo <= 0;
	else
		szamlalo <= szamlalo + 1;
		
assign en = (szamlalo == 5_999);

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

// 2 bit counter
reg [1:0] cntr;
always @ (posedge clk)
	if(rst)
		cntr <= 0;
	else if(en)
		cntr <= cntr + 1;
		
reg [3:0] dmux;

always @ (*)
	case (cntr)
	2'b00: dmux <= reg_din0;
	2'b01: dmux <= reg_din1;
	2'b10: dmux <= reg_din2;
	2'b11: dmux <= reg_din3;
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
