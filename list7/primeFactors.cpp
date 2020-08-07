#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void primeFactors(int n) {
    vector<int> v;
    while((n % 2) == 0) {
        v.push_back(2);
        n /= 2;

    }

    for(int i = 3; i <= sqrt(n); i += 2) {
        while((n % i) == 0) {
            v.push_back(i);
            n /= i;
        }
    }

    if(n > 2)
        cout << n;
    else
        cout << v.back();
}

int main() {
    int n;

    cin >> n;
    primeFactors(n);

    return 0;
}