#include <iostream>
using namespace std;

int main() {
    bool primo = false;
    int ent, n, cont, i, div;
    i = 2;
    cout << "Insira um valor inteiro positivo\n";
    cin >> n;
    while(n != 0) {
        while(i < n) {
            div = n % i;
            if(div == 0)
                primo = true;
            i++;
        }
        cin >> n;
        i = 2;
    }

    if(primo)
        cout << "\nnumero primo digitado\n";
    else
        "numero primo nao digitado";

    return 0;
}
