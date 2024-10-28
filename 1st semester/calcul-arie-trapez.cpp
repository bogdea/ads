#include <iostream>

using namespace std;

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