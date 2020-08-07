#include <iostream>
using namespace std;

// Euclidian Algorithm
int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;

    cin >> a >> b;

    cout << "MDC(" << a << " , " << b << ") = " << gcd(a, b);

    return 0;
}