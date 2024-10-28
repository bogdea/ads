#include <iostream>

using namespace std;

// enunt: 

// Ana vrea să verifice dacă greutatea şi înălţimea ei corespund vârstei pe care o are. Ea a
// găsit într-o carte următoarele formule de calcul ale greutăţii şi înălţimii unui copil, v fiind
// vârsta: greutate = 2*v + 8 (în kg), înălţime = 5*v + 80 (în cm). Descrieţi un algoritm în
// C/C++ care să citească vârsta unui copil şi să afişeze greutatea şi înălţimea “ideală”,
// folosind aceste formule. De exemplu, pentru v = 10 (ani) se obţine g = 28 (kg) şi h = 130
// (cm).

int main() {
   int varsta, greutate, inaltime;

   cout << "introdu varsta: ";
   cin >> varsta;

   greutate = 2 * varsta + 8;
   inaltime = 5 * varsta + 80;

   cout << "greutatea ideala este de " << greutate << "kg iar inaltimea potrivita varstei tale este de " << inaltime << "cm";


    return 0;
}