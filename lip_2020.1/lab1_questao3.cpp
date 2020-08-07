#include <iostream>
using namespace std;

int main() {
    float a, b, c, d;
    cin >> a >> b >> c;
    cout << "Entrada: " << a << " " << b << " " << c << "\n";
    d = (a + b + c) / 3;
    if(d >= 7 || (d >= 5 && a >= 3 && b >= 3 && c >= 3))
        cout << "Saida: Aprovado\n";
    else if(d >= 3)
        cout << "Saida: Final\n";
    else
        cout << "Saida: Reprovado\n";
    return 0;
}
