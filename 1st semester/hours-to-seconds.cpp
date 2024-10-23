#include <iostream>

using namespace std;

int main() {
    int seconds, hours;

    cout << "enter the number of hours: ";
    cin >> hours;

    seconds = hours * 3600;

    cout << "there are " << seconds << " seconds in " << hours << " hours";

    return 0;
}