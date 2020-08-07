#include <iostream>
using namespace std;

void time(int &seconds, int &min, int &hours);
void dayPeriod(int seconds);

int main() {
    int seconds, hours, min;
    cin >> seconds;

    time(seconds, min, hours);

    return 0;
}

void time(int &seconds, int &min, int &hours) {
    dayPeriod(seconds);

    hours = seconds / 3600;
    min = (seconds % 3600) / 60;
    seconds = (seconds % 3600) % 60;
}

void dayPeriod(int seconds) {
    if(seconds < 21600)
        cout << "Madrugada";

    else if(seconds < 43200)
        cout << "Manhã";

    else if(seconds < 64800)
        cout << "Tarde";
        
    else if(seconds < 86400)
        cout << "Noite";
}