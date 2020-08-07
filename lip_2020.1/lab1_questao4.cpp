#include <iostream>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3, xFinal, yFinal;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << "Entrada: " << x1 << " " << y1 << "  " << x2 << " " << y2 << "  " << x3 << " " << y3 << "\n";
    xFinal = x1 + x2;
    yFinal = y1 + y2;
    if(x3 <= xFinal && y3 <= yFinal)
        cout << "Saida: o ponto (" << x3 << ", " << y3 << ") esta dentro";
    else
        cout << "Saida: o ponto (" << x3 << ", " << y3 << ") esta fora";
return 0;
}

