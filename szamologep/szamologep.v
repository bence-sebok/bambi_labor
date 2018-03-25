`timescale 1ns / 1ps
// **********************************************
// ************** Top level modul ***************
// **********************************************
module szamologep(
	input clk,
	input reset,
	input [7:0] dip_sw,
	input [3:0] btn,
	output [7:0] leds,
	output [3:0] AN, // digit anód kiválasztása
   output [7:0] SEG // adott digit szegmensei
);
// **********************************************
// ***************** Konstansok *****************
// **********************************************
localparam ADD = 4'b0001;
localparam SUB = 4'b0010;
localparam MUL = 4'b0100;
localparam DIV = 4'b1000;
localparam ERROR = 8'b0000_0000;
localparam NEXT_1 = 4'b1000;
localparam NEXT_2 = 4'b0100;
localparam NEXT_3 = 4'b0010;
localparam NEXT_4 = 4'b0001;
localparam IDLE = 0;
localparam STOREA = 1;
localparam STOREOPERATION = 2;
localparam STOREB = 3;
localparam DISPLAY = 4;
// **********************************************
// ************* Fizikai bemenetek **************
// **********************************************
reg rst; // reset gomb
reg [7:0] kapcsolok; // dip switch kapcsolók
reg [3:0] gombok; // nyomógombok (BTN0-BTN3)
// Fizikai bemenetek mintavételezése
always @(posedge clk)
begin
	rst <= reset;
	kapcsolok <= dip_sw;
	gombok <= btn;
end
// **********************************************
// ************* Fizikai kimenetek **************
// **********************************************
reg [7:0] kimenet;
reg [7:0] eredmeny;
reg [7:0] osztas_eredmeny;
// **********************************************
// ************* Belso segédváltozók ************
// **********************************************
wire osztas_kesz;
wire div0;
wire [7:0] hanyados;
wire [7:0] maradek;
reg [7:0] operandusA;
reg [7:0] operandusB;
reg [7:0] operation;
// **********************************************
// ****************** Állapotgép ****************
// **********************************************
reg [2:0] jelenlegi;
reg [2:0] kovetkezo;
// *************** Állapotátmenet ***************	
always @ (posedge clk)
if(rst)
	jelenlegi <= IDLE;
else
	jelenlegi <= kovetkezo;
// *************** Állapotváltás ****************	
always @ (posedge clk)
	case(jelenlegi)
		IDLE:
			if(gombok == NEXT_1)
			begin
				kovetkezo <= STOREA;
			end
			else
				kovetkezo <= IDLE;
		STOREA:
			if(gombok == NEXT_2)
			begin
				kovetkezo <= STOREOPERATION;
			end
			else
				kovetkezo <= STOREA;
		STOREOPERATION:
			if(gombok == NEXT_3)
			begin
				kovetkezo <= STOREB;
			end
			else
				kovetkezo <= STOREOPERATION;
		STOREB:
			if(gombok == NEXT_4)
			begin
				kovetkezo <= DISPLAY;
			end
			else
				kovetkezo <= STOREB;
		DISPLAY:
			if(gombok == NEXT_1)
			begin
				kovetkezo <= IDLE;
			end
			else
				kovetkezo <= DISPLAY;
		default: kovetkezo <= IDLE;
	endcase
// **********************************************
// ****************** Számológép ****************
// **********************************************
// ************** Adatok beolvasása *************
always @ (posedge clk)
if(rst)
	begin
	operandusA <= 0;
	operandusB <= 0;
	operation <= 0;
	end
else if(jelenlegi == IDLE)
	operandusA <= dip_sw;
else if(jelenlegi == STOREA)
	operation <= dip_sw;
else if(jelenlegi == STOREOPERATION)
	operandusB <= dip_sw;
// ************** LED-ek vezérlése **************
always @ (posedge clk)
if(rst)
	kimenet <= 0;
else if(jelenlegi == STOREA)
	kimenet <= operandusA;
else if(jelenlegi == STOREOPERATION)
	kimenet <= operation;
else if(jelenlegi == STOREB)
	kimenet <= operandusB;
else if(jelenlegi == DISPLAY)
	kimenet <= eredmeny;

// assign leds = kimenet;
// ************ Muvelet multiplexer *************
reg [3:0] muvelet_mux;
always @ (posedge clk)
begin
	muvelet_mux <= operation[3:0];
end
// ************* Muvelet elvégzése **************
always @ (posedge clk)
	case (muvelet_mux)
		ADD: eredmeny <= operandusA + operandusB;
		SUB: eredmeny <= operandusA - operandusB;
		MUL: eredmeny <= operandusA * operandusB;
		DIV: eredmeny <= osztas_eredmeny;
		default: eredmeny <= 0;
	endcase
// ************** Osztás kezelése ***************
wire osztas_kezdjed;
assign osztas_kezdjed = (muvelet_mux == DIV);
// **************** Osztó modul *****************
oszto #(.BITS(8)) osztas(
	.start(osztas_kezdjed),
	.clk(clk),
	.rst(rst),
	.a(operandusA),
	.b(operandusB),
	.hanyados(hanyados),
	.maradek(maradek),
	.ready(osztas_kesz),
	.hiba(div0)
);
// ************* Osztás eredménye ***************
always @ (posedge clk)
	if(osztas_kesz)
	begin
		if(div0)
			 osztas_eredmeny <= 8'b0000_1110;
		else
			 osztas_eredmeny <= hanyados;
	end
// **********************************************
// ******************* bin2bcd ******************
// **********************************************
wire kovetkezo_helyiertek;
wire nullaval;
wire nullaval2;
wire atalakitas_kesz;
wire [7:0] szazasok;
wire [7:0] tizesek;
wire [7:0] egyesek;
wire [7:0] reszeredmeny;
reg [7:0] display_7seg;
// ******** Hétszegmensen való kijelzés **********
always @ (posedge clk)
if(rst)
	display_7seg <= 0;
else if(jelenlegi == STOREA)
	display_7seg <= operandusA;
else if(jelenlegi == STOREOPERATION)
	display_7seg <= operation;
else if(jelenlegi == STOREB)
	display_7seg <= operandusB;
else if(jelenlegi == DISPLAY)
	display_7seg <= eredmeny;
// ******* Megjelenítendo szám átalakítása *******
oszto #(.BITS(8)) bin2bcd_felso(
	.start(1'b1),
	.clk(clk),
	.rst(rst),
	.a(display_7seg),
	.b(8'b0110_0100), // 100
	.hanyados(szazasok),
	.maradek(reszeredmeny),
	.ready(kovetkezo_helyiertek),
	.hiba(nullaval)
);
oszto #(.BITS(8)) bin2bcd_also(
	.start(kovetkezo_helyiertek),
	.clk(clk),
	.rst(rst),
	.a(reszeredmeny),
	.b(8'b0000_1010), // 10
	.hanyados(tizesek),
	.maradek(egyesek),
	.ready(atalakitas_kesz),
	.hiba(nullaval2)
);

assign leds = display_7seg;
// **********************************************
// ************* Hétszegmens kijelzo ************
// **********************************************
reg [7:0] reg_1;
reg [7:0] reg_10;
reg [7:0] reg_100;
reg [7:0] reg_1000;
// ************* Megjelenítendo adat ************
always @ (posedge clk)
if(rst | jelenlegi == IDLE)
begin
	reg_1 <= 0;
	reg_10 <= 0;
	reg_100 <= 0;
	reg_1000 <= 0;
end
else if(atalakitas_kesz)
begin
	if(div0 && jelenlegi == DISPLAY)
		begin
		reg_1 <= 8'b0000_1110;
		reg_10 <= 8'b0000_1110;
		reg_100 <= 8'b0000_1110;
		reg_1000 <= 8'b0000_1110;
		end
	else
		begin
		reg_1 <= egyesek;
		reg_10 <= tizesek;
		reg_100 <= szazasok;
		reg_1000 <= 0;
		end
end
// ************* Hétszegmens modul ************
hetszegmens kijelzo(
	.clk(clk),
	.rst(rst),
	.din0(reg_1[3:0]),
	.din1(reg_10[3:0]),
	.din2(reg_100[3:0]),
	.din3(reg_1000[3:0]),
   .AN(AN),
	.SEG(SEG)
);

endmodule
