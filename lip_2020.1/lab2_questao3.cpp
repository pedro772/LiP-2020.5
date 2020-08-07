#include <iostream>
using namespace std;

int main() {
    int n, div, i = 0;
    cout << "Insira um numero inteiro\n";
    cin >> n;
    while(n != 0) {
        n = n / 10;
        i++;
    }

    cout << i;

    return 0;
}
