/*

`timescale 1ns / 1ps

// Top-level module
module szamologep(
	input clk,
	input reset,
	input [7:0] dip_sw,
	input [3:0] btn,
	output [7:0] leds
	//output [3:0] AN, // digit anód kiválasztása
   //output [7:0] SEG // adott digit szegmensei
);

// Segédváltozók
reg rst; // reset gomb
reg [3:0] opA; // egyik operandus
reg [3:0] opB; // másik operandus
reg [3:0] muvelet;
reg [7:0] kimenet;
wire osztas_kesz;
wire div0;
wire [3:0] hanyados;
wire [3:0] maradek;
reg [7:0] kapcsolok;

// Mûveletek
localparam ADD = 4'b0001;
localparam SUB = 4'b0010;
localparam MUL = 4'b0100;
localparam DIV = 4'b1000;
localparam ERROR = 8'b0000_0000;
// Elso verzióban: osztás helyett bitenkénti XOR
// localparam XOR = 4'b1000;

// ********************************************************************************

// Állapotok
localparam NEXT = 4'b1000;
localparam IDLE = 0;
localparam STOREA = 1;
localparam STOREOPERATION = 2;
localparam STOREB = 3;
// Állapotváltozók
reg [1:0] jelenlegi;
reg [1:0] kovetkezo;

// ---------
// Állapotgép
// ---------
// Állapotváltás		
always @ (posedge clk)
if(rst)
	jelenlegi <= IDLE;
else
	jelenlegi <= kovetkezo;
	
reg [7:0] operandusA;
reg [7:0] operandusB;
reg [7:0] operation;
reg kijelzes;

/*
always @ (posedge clk)
if(rst)
begin
	operandusA <= 0;
	operandusB <= 0;
	operation <= 0;
end

always @ (posedge clk)
	case(jelenlegi)
		IDLE:
			if(muvelet == NEXT)
			begin
				kovetkezo <= STOREA;
			end
			else
				kovetkezo <= IDLE;
		STOREA:
			if(muvelet == NEXT)
			begin
				kovetkezo <= STOREOPERATION;
			end
			else
				kovetkezo <= STOREA;
		STOREOPERATION:
			if(muvelet == NEXT)
			begin
				kovetkezo <= STOREB;
			end
			else
				kovetkezo <= STOREOPERATION;
		STOREB:
			if(muvelet == NEXT)
				kovetkezo <= IDLE;
			else
				kovetkezo <= STOREB;
		default: kovetkezo <= IDLE;
	endcase
	
// ********************************************************************************

// Bemenetek mintavételezése és tárolása
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

// Kimeneti LED-ek állítása
always @ (posedge clk)
if(rst)
	kimenet <= 0;
else if(jelenlegi == STOREA)
	kimenet <= operandusA;
else if(jelenlegi == STOREOPERATION)
	kimenet <= operation;
else if(jelenlegi == STOREB)
	kimenet <= operandusB;

assign leds = kimenet;

// Synchronize inputs
always @(posedge clk)
begin
	rst <= reset;
	kapcsolok <= dip_sw;
	opA <= dip_sw[7:4];
	opB <= dip_sw[3:0];
	muvelet <= btn;
end

/*

// Kombinációs logika:
// * mert ha bármilyen bemenet változik, akkor változhat a kimenet.
// Bemeneti változás lehet az operandusok vagy a muvelet változása.
reg [7:0] osztas_eredmeny;
always @ (*)
	case (muvelet)
		ADD: kimenet <= opA + opB;
		SUB: kimenet <= opA - opB;
		MUL: kimenet <= opA * opB;
		// XOR: kimenet <= a ^ b;
		DIV: kimenet <= osztas_eredmeny;
		default: kimenet <= 8'b0000_0000;
	endcase
	
wire osztas_kezdjed;
assign osztas_kezdjed = (muvelet == DIV);

always @ (posedge clk)
	if(osztas_kesz)
		if(div0)
			 osztas_eredmeny <= 8'b0000_0000;
		else
			 osztas_eredmeny <= {4'b0000,hanyados};
			// osztas_eredmeny <= {hanyados,maradek};

assign leds = kimenet;

/*
wire johet_maradek;
wire div0_hanyados;
wire div0_maradek;
wire div_bcd;

oszto bcd_osztas_3(
	.start(osztas_kesz),
	.clk(clk),
	.rst(rst),
	.a(hanyados),
	.b(4'b1010), // 10
	.hanyados(hanyados_10),
	.maradek(hanyados_1),
	.ready(johet_maradek),
	.hiba(div0_hanyados)
);

oszto bcd_osztas_4(
	.start(johet_maradek),
	.clk(clk),
	.rst(rst),
	.a(maradek),
	.b(4'b1010), // 10
	.hanyados(maradek_10),
	.maradek(maradek_1),
	.ready(div_bcd),
	.hiba(div0_maradek)
);
*/

/*

// osztó modul
oszto oszto_aramkor(
	.start(osztas_kezdjed),
	.clk(clk),
	.rst(rst),
	.a(opA),
	.b(opB),
	.hanyados(hanyados),
	.maradek(maradek),
	.ready(osztas_kesz),
	.hiba(div0)
);

// bin2bcd: bináris átalakítása BCD számmá
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
	.rst(rst),
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
	.rst(rst),
	.a(reszeredmeny),
	.b(8'b0000_1010), // 10
	.hanyados(tizesek),
	.maradek(egyesek),
	.ready(atalakitas_kesz),
	.hiba(nullaval2)
);

reg [7:0] reg_1;
reg [7:0] reg_10;
reg [7:0] reg_100;
reg [7:0] reg_1000;

always @ (posedge clk)
begin
/*
if(div_bcd)
	begin
		reg_1 <= maradek_1;
		reg_10 <= maradek_10;
		reg_100 <= hanyados_1;
		reg_1000 <= hanyados_10;
	end
else
*/

/*
if(atalakitas_kesz)
	begin
		reg_1 <= egyesek;
		reg_10 <= tizesek;
		reg_100 <= szazasok;
		reg_1000 <= 0;
	end
end

// hétszegmens vezérlése
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

*/