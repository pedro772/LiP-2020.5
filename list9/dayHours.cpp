#include <iostream>
#include <iomanip>
using namespace std;

void time(int seconds) {
    int hours, minutes;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = (seconds % 3600) % 60;

    cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds;
}

int main() {
    int seconds;

    cin >> seconds;

    time(seconds);

    return 0;
}