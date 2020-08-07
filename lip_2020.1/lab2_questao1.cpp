#include <iostream>
using namespace std;

int main() {
    int n, ent, i;
    float soma, media;
    soma = 0;
    cout << "Insira um numero inteiro\n";
    cin >> n;
    for(i = 0; i < n; i++) {
        cout << "Insira um numero inteiro\n";
        cin >> ent;
        soma += ent;
    }
    media = soma / i;
    cout << "A media eh: " << media;

    return 0;
}
