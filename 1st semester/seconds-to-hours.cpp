#include <iostream>

using namespace std;

int main() {
    int seconds, minutes, hours;

    cout << "enter the number of seconds: ";
    cin >> seconds;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    cout << hours << " hours " << minutes << " minutes " << seconds << " seconds";

    return 0;
}