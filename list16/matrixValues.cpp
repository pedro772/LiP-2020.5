#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;

int main() {
    int dimensionI, dimensionJ, fill, auxMax = INT_MAX, auxMin = INT_MIN, sum = 0;
    cin >> dimensionI >> dimensionJ;

    int identity[dimensionI][dimensionJ];
    for(int i = 0; i < dimensionI; i++) {
        for(int j = 0; j < dimensionJ; j++) {
            cin >> fill;
            identity[i][j] = fill;
            if(fill < auxMax)
                auxMax = fill;
            if(fill > auxMin)
                auxMin = fill;
            
            sum += fill;
        }
    }

    float size = float(dimensionI * dimensionJ);
    float mean = sum / size;

    cout << "Menor valor: " << auxMax << endl;
    cout << "Maior valor: " << auxMin << endl;
    cout << "Média dos valores: " << fixed << setprecision(2) << mean;

    return 0;
}