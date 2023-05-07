# **Antras laboratorinis**
## _**V1.1 versija**_ <br>
Programa leidžia įvesti arba skaityti iš failo studentų duomenis (vardus ir pavardes, namų darbų ir egzamino pažymius) arba generuoti šių duomenų failus, skaičiuoja kiekvieno studento galutinius pažymius ir leidžia analizuoti darbo su failais trukmę. Galutinio pažymio skaičiavimo formulė: <br>
![image](https://user-images.githubusercontent.com/116886672/220993297-ed501583-e082-48a1-b7d2-1f647e67070d.png)

Programos veikimas:
 * Duomenų failo generavimas: žr. a)
 * Duomenų skaitymas iš turimo .txt failo: žr. b)
 * Duomenų įrašymas arba generavimas: žr. c)

**Svarbu:**
* Įvestis priimama tik su 'enter' paspaudimu.
* Generuojamo '.txt' failo formatas: <br>
Pavarde  Vardas  ND1  ...  NDn  Egz.
* Priimamų skaitymui '.txt' failų formatai: <br>
   * Pavarde  Vardas  ND1  ...  NDn  Egz.  <br>
   * Pavarde  Vardas  Egz.  ND1  ...  NDn  <br>

Jei programa skaitant failą neras egzamino pažymio, automatiškai bus skaitoma pirmuoju pateiktu formatu. <br> <br>

**a)--------------** <br>
 1. Programos pradžioje naudotojui duodamas pasirinkimas sugeneruoti duomenų (studentų vardų, pavardžių, namų darbų ir egzamino pažymių) failą (paspaudus 's'). Pasirinkus generuoti failą ('s'), programa paprašys įvesti norimą studentų (įrašų) kiekį. Įvedus studentų kiekį, naudotojui duodamas pasirinkimas įrašyti norimą studentų pažymių kiekį arba paspausti 'n' ir programa pažymių kiekį sugeneruos atsitiktinai (1–15). Po to programa naudotojo prašys įvesti failo pavadinimą, kuriuo naudotojas nori pavadinti sugeneruotą failą.
2. Sugeneravus failą, naudotojui duodamas pasirinkimas duomenis (studentų vardus, pavardes ir galutinius pažymius) spausdinti failuose (paspaudus 'f') arba baigti programos darbą (paspaudus 'b'). <br>
 * 2.1 Pasirinkus duomenų išvedimą į failus ('f'), naudotojui duodamas pasirinkimas kokį konteinerį naudoti: vektorių (paspaudus 'v'), sąrašą (paspaudus 'l'), deką (paspaudus 'd') arba visus tris (paspaudus '3'). Nepaisant to, koks konteineris naudojamas, studentai yra išskirstomi į dvi grupes pagal galutinius pažymius (bent vienas galutinis >=5 ir <5) ir įrašomi į du failus ('vargsai(xy).txt' ir 'protingieji(xy).txt')*, o juose – surašyti abėcėlės tvarka. Taip pat, gale programos į konsolę yra išspausdinama:
   * Failo generavimo laikas (neįeina į visos programos veikimo laiką); <br>
(kiekvienos strategijos): <br>
   * Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas;
   * Failo įrašų rūšiavimo abėcėlės tvarka laikas;
   * Failo įrašų dalijimo į dvi grupes laikas;
   * Grupių 'protingieji' ir 'vargsai' įrašymo į failą laikas;
   * Visos programos veikimo (testo) laikas.
Jei naudotojas pasirinko naudoti tris konteinerius, tada nurodyti duomenys išspausdinami (po) tris kartus, o prieš tai programa nurodo, kurio konteinerio ir kurios strategijos testavimo duomenys yra matomi. <br>
 * 2.2 Pasirinkus baigti programos darbą ('b'), programa baigs darbą.
3. Nenorint generuoti failo (paspaudus 'n'), naudotojui duodamas pasirinkimas skaityti duomenis iš failo (paspaudus 's') (žr. b).
*čia x – raidė nurodanti koks konteineris (v – vektorius (vector), l – sąrašas (list), d – deque (dekas)), o y – kuri strategija buvo naudota. <br>

 **b)--------------** <br>
 1. Nenorint generuoti failo (paspaudus 'n'), naudotojui duodamas pasirinkimas skaityti duomenis iš failo (paspaudus 's').
 2.	Pasirinkus skaityti iš failo ('s'), programa paprašys naudotojo įvesti pavadinimą (.txt) failo, iš kurio naudotojas nori skaityti duomenis. Jeigu pasirinktas failas nebus rastas arba jis bus tuščias, programa informuos naudotoją ir prašys iš naujo įvesti pavadinimą. 
 3.	Jei failas randamas ir nėra tuščias, naudotojui duodamas pasirinkimas duomenis spausdinti failuose (paspaudus 'f') arba konsolėje (paspaudus 'k'). 
 * Pasirinkus spausdinti konsolėje ('k') visi studentų duomenys (vardas, pavardė ir galutiniai pažymiai) bus išspausdinti konsolėje abėcėlės tvarka.
 * Pasirinkus duomenų išvedimą į failus ('f'), naudotojui duodamas pasirinkimas kokį konteinerį naudoti: vektorių (paspaudus 'v'), sąrašą (paspaudus 'l'), deką (paspaudus 'd') arba visus tris (paspaudus '3'). Nepaisant to, koks konteineris naudojamas, studentai yra išskirstomi į dvi grupes pagal galutinius pažymius (bent vienas galutinis >=5 ir <5) ir įrašomi į du failus ('vargsai(xy).txt' ir 'protingieji(xy).txt')*, o juose – surašyti abėcėlės tvarka. Taip pat, gale programos į konsolę yra išspausdinama (kiekvienos strategijos):
   * Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas;
   * Failo įrašų rūšiavimo abėcėlės tvarka laikas;
   * Failo įrašų dalijimo į dvi grupes laikas;
   * Grupių 'protingieji' ir 'vargsai' įrašymo į failą laikas;
   * Visos programos veikimo (testo) laikas;
Jei naudotojas pasirinko naudoti tris konteinerius, tada nurodyti duomenys išspausdinami (po) tris kartus, o prieš tai programa nurodo, kurio konteinerio ir kurios strategijos testavimo duomenys yra matomi.
4. Pasirinkus neskaityti duomenų iš failo (paspaudus 'n'), naudotojui duodamas pasirinkimas duomenis įrašyti arba generuoti (žr. c). <br>
*čia x – raidė nurodanti koks konteineris (v – vektorius (vector), l – sąrašas (list), d – deque (dekas)), o y – kuri strategija buvo naudota.

**c)--------------** <br>
1. Naudotojui duodamas pasirinkimas įvesti pažymių maksimalų kiekį. Tai reiškia, kad kiekvienas studentas turės įvestą maksimalų pažymių kiekį arba maksimalaus kiekio nebus (paspaudus 'n'). Įvestas maksimalus kiekis arba pasirinkimas, kad jo nebūtų (paspaudus 'n'), negali būti keičiamas programos veikimo metu.
2. Naudotojui duodamas pasirinkimas studento duomenis įrašyti (paspaudus 'i') arba generuoti (paspaudus 'g').
 * Pasirinkus įvedinėti duomenis ('i'), naudotojas turės įvesti visus duomenis: studento vardą, pavardę, namų darbų ir egzamino pažymius. Programos pradžioje nustačius maksimalų kiekį, programa leis įvesti pažymius tol, kol bus pasiektas maksimalus pažymių kiekis arba kol naudotojas paspaus 'n'. Jei įvestas mažesnis nei maksimalus pažymių kiekis, likęs kiekis bus užpildytas nuliais.
 * Pasirinkus generuoti duomenis ('g'), visi studento duomenys (vardas, pavardė, namų darbų ir egzamino pažymiai) bus sugeneruoti. Jei anksčiau programoje buvo nustatytas maksimalus pažymių kiekis, bus sugeneruotas maksimalus pažymių kiekis, jei ne – programa paprašys naudotojo įvesti norimą namų darbų pažymių kiekį (sugeneruoti). 
3. Po kiekvieno įvesto studento naudotojas yra informuojamas, kad duomenys buvo įrašyti ir duodamas pasirinkimas įvesti dar vieną studentą (paspaudus 'y') arba baigti studentų duomenų įvedimą (paspaudus 'n').
4. Įvedus visus studentus, visi studentų duomenys (vardas, pavardė ir galutiniai pažymiai) bus išspausdinti konsolėje abėcėlės tvarka.

## **Testavimas** <br>
### **I) Programos veikimo sparta naudojant struktūrą ir klasę** <br>
Testavimo parametrai: dekas, 100 000 ir 1 000 000 įrašų failai, 2 testavimo strategija. <br>
**100 000 įrašų**
|                                                           |   Struktūra  |     Klasė    |
|-----------------------------------------------------------|:------------:|:------------:|
| Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas  |   0.17593 s  |  0.330403 s  |
| Failo dalijimo į dvi grupes laikas                        | 0.00736471 s | 0.00427666 s |
| Failo rūšiavimo abėcėlės tvarka laikas                    |  0.0421794 s |  0.0811893 s |
| Grupių 'protingieji' ir 'vargsai' įrašymo į failus laikas |  0.549214 s  |  0.509953 s  |
| Bendras testo laikas                                      |  0.774813 s  |   0.92587 s  |

**1 000 000 įrašų**
|                                                           |  Struktūra  |    Klasė    |
|-----------------------------------------------------------|:-----------:|:-----------:|
|  Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas |  1.56188 s  |  2.12336 s  |
|              Failo dalijimo į dvi grupes laikas           | 0.0422208 s | 0.0457197 s |
|           Failo rūšiavimo abėcėlės tvarka laikas          |   0.3742 s  |  0.580909 s |
| Grupių 'protingieji' ir 'vargsai' įrašymo į failus laikas |  7.17955 s  |   7.0595 s  |
|                    Bendras testo laikas                   |  9.15793 s  |  9.80952 s  |


### **II) Programos veikimo sparta ir .exe failo dydis naudojant skirtingas kompiliavimo vėliavėles (flags)** <br>
Testavimo parametrai: dekas, 10 000 000 įrašų failas, 2 testavimo strategija
|                  |    -O1    |    -O2    |    -O3    |
|------------------|:---------:|:---------:|:---------:|
| Veikimo laikas   | 139.573 s | 93.8146 s | 91.8152 s |
| .exe failo dydis |   225 KB  |   147 KB  |   152 KB  |

**Išvados:** <br>
1. (I) Programos veikimo laikas naudojant struktūrą ir klasę yra labai panašus, bet naudojant struktūrą programa veikia greičiau.
2. (II) Programa veikia greičiausiai naudojant -O3 kompiliavimo vėliavėlę.
3. (III) Programos .exe failas užima mažiausiai atminties naudojant -O2 kompiliavimo vėliavėlę.









