#include <iostream>
using namespace std;

int main() {
    char a, b, c;
    cout << "Entrada: \n";
    cin >> a >> b;
    c = int(a) + int(b);
    cout << "Saida: \n";
    cout << "Char: " << a << ", cod ASCII: " << int(a) << "\nChar: " << b << ", cod ASCII: " << int(b);
    cout << "\nSoma: " << int(a) + int(b) << ", char: " << c;
    return 0;
}
