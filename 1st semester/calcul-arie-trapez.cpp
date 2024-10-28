#include <iostream>

using namespace std;

// enunt: 

// Să se implementeze un algoritm în C/C++ pentru calculul ariei unui trapez când se cunosc
// baza mică (b), baza mare (B) şi înălţimea (h). De exemplu, pentru b=3, B=6 şi h=5 se
// obţine A = (B+b)*h/2 = 9*5/2 = 22,5.

int main() {
   double b, B, h, A;

    cout << "introdu valoarea bazei mici a trapezului: ";
    cin >> b;

    cout << "introdu valoarea bazei mari a trapezului: ";
    cin >> B;

    cout << "introdu valoarea inaltimii trapezului: ";
    cin >> h;

    A = (B + b) * h / 2;
    cout << "aria trapezului este: " << A;

    return 0;
}