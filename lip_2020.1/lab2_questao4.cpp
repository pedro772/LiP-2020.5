#include <iostream>
using namespace std;

int main() {
    bool primo = true;
    int n, i, div;
    i = 1;
    cout << "Digite um numero inteiro positivo\n";
    cin >> n;
    while(i < n) {
        div = n % i;
        if(div == 0)
            primo = false;
        i++;
    }
    if(!primo)
        cout << "o numero " << n << " nao eh primo";
    else
        cout << "o numero " << n << " eh primo";

    return 0;
}
