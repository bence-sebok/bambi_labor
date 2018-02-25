`timescale 1ns / 1ps

// Top-level module
module szamologep(
	input clk,
	input rst,
	input [7:0] dip_sw,
	input [3:0] btn,
	output [7:0] leds,
	output [3:0] AN, // digit anód kiválasztása
   output [7:0] SEG // adott digit szegmensei
);

// Synchronize inputs
reg reset;
reg [3:0] a;
reg [3:0] b;
reg [3:0] muvelet;
reg [7:0] kimenet;
// reg osztas = 0; // ???????????????????????????????
wire osztas_kesz;
wire div0;
wire [3:0] hanyados;
wire [3:0] maradek;
always @(posedge clk)
begin
	reset <= rst;
	a <= dip_sw[7:4];
	b <= dip_sw[3:0];
	muvelet <= btn;
end

// Mûveletek
localparam ADD = 4'b0001;
localparam SUB = 4'b0010;
localparam MUL = 4'b0100;
// localparam XOR = 4'b1000;
localparam DIV = 4'b1000;
reg [7:0] osztas_eredmeny;
// Kombinációs logika
// - *, mert ha bármilyen bemenet változik, akkor változhat a kimenet
always @ (*)
	case (muvelet)
	ADD: kimenet <= a + b;
	SUB: kimenet <= a - b;
	MUL: kimenet <= a * b;
	// XOR: kimenet <= a ^ b;
	DIV: kimenet <= osztas_eredmeny;
	default: kimenet <= 8'b1111_1111;
	endcase

always @ (posedge clk)
	if(osztas_kesz)
		if(div0)
			 osztas_eredmeny<= 8'b1111_1111;
		else
			osztas_eredmeny <= {hanyados,maradek};

assign leds = kimenet;
wire osztas_kezdjed;
assign osztas_kezdjed=(muvelet==DIV);
// osztó modul
oszto oszto_aramkor(
	.start(osztas_kezdjed),
	.clk(clk),
	.rst(reset),
	.a(a),
	.b(b),
	.hanyados(hanyados),
	.maradek(maradek),
	.ready(osztas_kesz),
	.hiba(div0)
);

// bináris átalakítása BCD számmá, avagy bin2bcd
wire johet_a_masodik;
wire nullaval;
wire nullaval2;
wire [7:0] szazasok;
wire [7:0] tizesek;
wire [7:0] egyesek;
wire [7:0] reszeredmeny;
wire atalakitas_kesz;
oszto #(.BITS(8)) bcd_osztas_1(
	.start(1'b1),
	.clk(clk),
	.rst(reset),
	.a(kimenet),
	.b(8'b0110_0100), // 100
	.hanyados(szazasok),
	.maradek(reszeredmeny),
	.ready(johet_a_masodik),
	.hiba(nullaval)
);

oszto #(.BITS(8)) bcd_osztas_2(
	.start(johet_a_masodik),
	.clk(clk),
	.rst(reset),
	.a(reszeredmeny),
	.b(8'b0000_1010), // 10
	.hanyados(tizesek),
	.maradek(egyesek),
	.ready(atalakitas_kesz),
	.hiba(nullaval2)
);

// hétszegmens vezérlése
hetszegmens kijelzo(
	.clk(clk),
	.rst(reset),
	.din0(egyesek[3:0]),
	.din1(tizesek[3:0]),
	.din2(szazasok[3:0]),
   .AN(AN),
	.SEG(SEG)
);

endmodule
