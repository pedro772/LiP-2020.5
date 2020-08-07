#include <iostream>
using namespace std;

int sequence(int factors);

int main() {
    int factors;

    cin >> factors;

    cout << sequence(factors);

    return 0;
}

int sequence(int factors) {
    long a[factors], sum = 0, i;

    for(i = 0; i <= factors; i++) {
        if(i == 0)
            a[i] = 5;
        else if(i == 1)
            a[i] = 7;
        else
            a[i] = (3 * a[(i - 1)]) + (2 * a[(i - 2)]);

        sum += a[i];
    }

    return sum;
}