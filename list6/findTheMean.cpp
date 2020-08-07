#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int input, sum = 0, i = 0;
    float mean, n;

    cin >> n;

    while(i < n) {
        cin >> input;

        sum += input;
        i++;
    }

    mean = sum / n;

    cout << fixed << setprecision(2) << mean;

    return 0;
}