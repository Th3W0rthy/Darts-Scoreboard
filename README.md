# A programozás alapjai 1 - Nagy házi feladat
# Darts Scoreboard

Egy konzolos alkalmazás lenne, amivel kettő darts játékmódban lehet számolni a pontokat és több játékos játszhat egymás ellen.

### '01 más néven 501
A játékos dob hármat és a dobásokat beírja a konzolra, kiszámolja a három dobás összegét és levonja a kezdeti értékből, majd innen folytatja tovább amíg el nem ér nulláig. Amikor egy játékos, ki tud szállni három dobásból az alkalmazás megjeleníti, hogy milyen dobásokkal lehet ezt. (a legnépszerűbbet vagy random?) Általában ennél a játéknál duplával kell kiszállni, ami annyit jelent, hogy az utolsó dobásnak duplának kell lennie és így kell lemennie nullára.


Játék kezdeténél ki lehet választani, hogy mennyiről kezdjék a játékot. 301, 401, 501, .. 1001 és, hogy mennyi set-et és leg-et játszanak.

### Cricket
Itt az a lényeg, hogy a játékos kidobja háromszor a 25-öt és 15-től 20-ig a számokat és a legkevesebb ponttal rendelkezzen. Ha valaki kidob egy számot és dob még ugyan olyan számot, akkor a többi játékosra ír pontot. Amikor valaki egy számból triplát dob azzal kidobta a számot.

### Bemenet
Sima számot dob valaki csak a számot kell beírnia. Ha valaki duplát dob egy D betűt kell beírnia a szám előtt. Amikor a játékos triplát dob T betűt kell a szám elé írnia. Bull-nál 25-öt kell írnia a játékosnak. Pl.:
```
20,D25,T1
vagy
15, d12, t19
```

### Statisztika
Egy játszma végén a program kiírja a játékosok statisztikáit.
- Eldobott nyilak
- Mennyit dobott a számokból
- Átlag
- 180-as dobások száma
- Legnagyobb kiszálló

### Indítás
Program elindításánál kiíródik egy gyorstalpaló, hoy mit hogy lehet használni.

### Mentés
Egy játszma végén el lehet menteni a játszmákat egy fájlba és onnan ki is tudja olvasni az alkalmazás és meg tudja jeleníteni.