#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float timeSpent, speed, distance, gas;

    cin >> timeSpent >> speed;

    distance = timeSpent * speed;
    gas = distance / 12.0;

    cout << fixed << setprecision(2) << gas;

    return 0;
}