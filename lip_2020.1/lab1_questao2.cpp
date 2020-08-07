#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Entrada: " << a << " " << b << " " << c << "\n";
    if(a >= b && a >= c && b >= c)
        cout << "Saida: " << a << " " << b << " " << c << "\n";
    else if(a >= b && a >= c && c > b)
        cout << "Saida: " << a << " " << c << " " << b << "\n";
    else if(b > a && b > c && a >= c)
        cout << "Saida: " << b << " " << a << " " << c << "\n";
    else if(b > a && b > c && c > a)
        cout << "Saida: " << b << " " << c << " " << a << "\n";
    else if(c > a && c > b && a >= b)
        cout << "Saida: " << c << " " << a << " " << b << "\n";
    else if(c > a && c > b && b > a)
        cout << "Saida: " << c << " " << b << " " << a << "\n";
    return 0;
}

