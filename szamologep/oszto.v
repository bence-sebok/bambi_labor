`timescale 1ns / 1ps
// **********************************************
// **************** Osztó modul *****************
// **********************************************
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
// ******************* I/O *********************
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
// ***************** Állapotok *****************
localparam WAIT = 0;
localparam COMPARE = 1;
localparam UPDATE = 2;
localparam READY = 3;
// ************ Belso segédváltozók ************
wire a_lt_b;
wire reg_ld;
wire sel;
wire cntr_rst;
wire cntr_en;
reg [BITS-1:0] cntr;
reg [BITS-1:0] a_reg;
reg [1:0] jelenlegi;
reg [1:0] kovetkezo;	
// ******* Belso segédváltozók kezelése ********
assign hiba = (b == 0);
assign a_lt_b = (a_reg < b); // leállási feltétel
assign reg_ld = ((jelenlegi == WAIT) || (jelenlegi == UPDATE)); // a regisztert frissíteni a kezdõ és a frissítõ állapotban kell
assign ready = (jelenlegi == READY);
assign cntr_rst = (jelenlegi == WAIT);
assign cntr_en = (jelenlegi == UPDATE);
assign sel = (jelenlegi == UPDATE);
// *********** Számláló: hányados **************
always @ (posedge clk)
if(cntr_rst)
	cntr <= 0;
else if(cntr_en)
	cntr <= cntr + 1;
// ********* Részeredmeny = maradék ************
always @ (posedge clk)
if(reg_ld)
	if(sel)
		a_reg <= a_reg - b;
	else
		a_reg <= a;
// **********************************************
// ****************** Állapotgép ****************
// **********************************************
// *************** Állapotátmenet ***************
always @ (posedge clk)
if(rst)
	jelenlegi <= WAIT;
else
	jelenlegi <= kovetkezo;
// *************** Állapotváltás ***************
always @ (*)
	case(jelenlegi)
		WAIT:
			if(hiba)
				kovetkezo <= READY;
			else if(start)
				kovetkezo <= COMPARE;
			else
				kovetkezo <= WAIT;
		COMPARE:
			if(a_lt_b)
			begin
				kovetkezo <= READY;
			end
			else
				kovetkezo <= UPDATE;
		UPDATE: kovetkezo <= COMPARE;
		READY:
			if(start)
				kovetkezo <= WAIT;
			else
				kovetkezo <= READY;
		default: kovetkezo <= WAIT;
	endcase

// ************** Modul kimenete ***************
assign hanyados = cntr;
assign maradek = a_reg;

endmodule
