#include <iostream>
using namespace std;

int main() {
    int ddd;

    cin >> ddd;

    switch (ddd)
    {
    case 11:
        cout << "São Paulo";
        break;
    case 21:
        cout << "Rio de Janeiro";
        break;
    case 61:
        cout << "Distrito Federal";
        break;
    case 68:
        cout << "Acre";
        break;
    case 71:
        cout << "Bahia";
        break;
    case 81:
        cout << "Pernambuco";
        break;
    case 84:
        cout << "Rio Grande do Norte";
        break;
    case 92:
        cout << "Amazonas";
        break;
    
    default:
        cout << "DDD não cadastrado";
        break;
    }

    return 0;
}