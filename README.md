# bambi_labor

## Bevezetés
A repository a [Budapesti Műszaki és Gazdaságtudományi Egyetem](http://www.bme.hu) [Villamosmérnöki és Informatikai Karán](https://www.vik.bme.hu) a [Méréstechnika és Információs Rendszerek Tanszék](https://www.mit.bme.hu) [Beágyazott és ambiens rendszerek laboratórium](https://www.mit.bme.hu/oktatas/targyak/vimiac09) tantárgyához készült

## 1-3. mérés: FPGA fejlesztés Verilog nyelven (Számológép)
A projekt a _szamologep_ mappában található.
### 1. verzió
Gombnyomásra végeredmény számítása és kijelzése.
#### Leírás:
  * DIP kapcsolókon operandusok beállítása:
    * DIP1-4: egyik operandus (4 bites előjel nélküli egész szám) --> opA
    * DIP5-8: másik operandus (4 bites előjel nélküli egész szám) --> opB
  * Nyomógombokon művelet kiválasztása:
    * BTN0: két operandus összeadása (opA + opB)
    * BTN1: két operandus különbsége (opA - opB)
    * BTN2: két operandus szorzata (opA * opB)
    * BTN3: két operandus hányadosa (opA / opB)
  * Eredmény kijelzése: LED-eken és hétszegmens kijelzőn
    * LED-eken: végeredmény binárisan ábrázolva
    * Hétszegmens kijelzőn: végeredmény BCD számrendszerben ábrázolva 4 digiten
#### Példa
  * opA = 12 (DIP1 = DIP2 = 1, DIP3 = DIP4 = 0)
  * opB = 7 (DIP5 = 0, DIP6 = DIP7 = DIP8 = 1)
  * BTN2 gomb lenyomása (szorzás)
  * Végeredmény (opA * opB) kijelzése: 84
    * LED-eken: 8'b0101_0100 (MSB: LD7, LSB: LD0)
    * Hétszegmens kijelzőn: 0084
