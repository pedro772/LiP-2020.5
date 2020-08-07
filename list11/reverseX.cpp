#include <iostream>
using namespace std;

void reverses(int &x);

int main() {
    int x, aux;
    cin >> x;
    aux = x;

    reverses(x);

    cout << "X = " << aux << endl;
    cout << "X invertido = " << x << endl;
    
    if(aux > x)
        cout << "X é maior que X invertido";
    if(aux == x)
        cout << "X é igual a X invertido";
    if(aux < x)
        cout << "X é menor que X invertido";

    return 0;
}

void reverses(int &x) {
    int aux = 0;
    while(x > 0) {
        aux = (aux * 10) + (x % 10);
        x /= 10;
    }

    x = aux;
}