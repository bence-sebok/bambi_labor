`timescale 1ns / 1ps
  
module oszto(
	start,
	clk,
	rst,
	a,
	b,
	hanyados,
	maradek,
	hiba,
	ready
);

parameter BITS = 4;
input start;
input clk;
input rst;
input [BITS-1:0] a;
input [BITS-1:0] b;
output wire [BITS-1:0] hanyados;
output wire [BITS-1:0] maradek;
output hiba;
output ready;
	 
// Seg�dv�ltoz�k
wire a_lt_b;
wire reg_ld;
wire sel;
wire cntr_rst;
wire cntr_en;
reg [BITS-1:0] cntr;
reg [BITS-1:0] a_reg;
// �llapotok
localparam WAIT = 0;
localparam COMPARE = 1;
localparam UPDATE = 2;
localparam KESZ = 3;
// �llapotv�ltoz�k
reg [1:0] jelenlegi;
reg [1:0] kovetkezo;

assign hiba = (b == 0);
// K�t operandushoz tartoz� kompar�tor
assign a_lt_b = (a_reg < b);
// A regisztert friss�teni a kezd� �s a friss�t� �llapotban kell.
assign reg_ld = (jelenlegi == WAIT) || (jelenlegi == UPDATE);
// Oszt�s v�g�nek jelzse
assign ready = (jelenlegi == KESZ);
assign cntr_rst = (jelenlegi == WAIT);
assign cntr_en = (jelenlegi == UPDATE);
assign sel = (jelenlegi == UPDATE);

// Sz�ml�l�: h�nyados n�vel�se
always @ (posedge clk)
if(cntr_rst)
	cntr <= 0;
else if(cntr_en)
	cntr <= cntr + 1;

// R�szeredm�ny t�rol�sa �s marad�k k�pz�se
always @ (posedge clk)
if(reg_ld)
	if(sel)
		a_reg <= a_reg - b;
	else
		a_reg <= a;

// ---------
// �llapotg�p
// ---------
// �llapotv�lt�s		
always @ (posedge clk)
if(rst)
	jelenlegi <= WAIT;
else
	jelenlegi <= kovetkezo;

always @ (*)
	case(jelenlegi)
		WAIT:
			if(hiba)
				kovetkezo <= KESZ;
			else if(start)
				kovetkezo <= COMPARE;
			else
				kovetkezo <= WAIT;
		COMPARE:
			if(a_lt_b)
			begin
				kovetkezo <= KESZ;
			end
			else
				kovetkezo <= UPDATE;
		UPDATE: kovetkezo <= COMPARE;
		KESZ:
			if(start)
				kovetkezo <= WAIT;
			else
				kovetkezo <= KESZ;
		default: kovetkezo <= WAIT; // ??????????????????????????????????????????
	endcase

assign hanyados = cntr;
assign maradek = a_reg;

endmodule
