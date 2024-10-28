#include <iostream>

using namespace std;

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