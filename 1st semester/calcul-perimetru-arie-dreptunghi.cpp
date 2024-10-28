#include <iostream>

using namespace std;

// enunt

// Se citesc valorile lungimii şi lăţimii unui dreptunghi. Să se implementeze un algoritm
// în C/C++ pentru a calcula perimetrul şi aria dreptunghiului. De exemplu, pentru
// lungime=5 şi latime=3, se obţine P=2*(lungime+latime)=16, iar A=lungime*latime=15.

int main() {
   int lungime, latime, P, A;

   cout << "introdu lungimea dreptunghiului: ";
   cin >> lungime;

   cout << "introdu latimea dreptunghiului: ";
   cin >> latime;

   P = 2 * (lungime + latime);
   A = lungime * latime;

   cout << "perimetrul dreptunghiului este " << P << " iar aria " << A; 

   

    return 0;
}