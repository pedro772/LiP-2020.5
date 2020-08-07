#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds;

    cin >> seconds;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = (seconds % 3600) % 60;

    cout << hours << " hora(s), " << minutes << " minuto(s) e " << seconds << " segundo(s)";

    return 0;
}