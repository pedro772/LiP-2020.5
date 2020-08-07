#include <iostream>
using namespace std;

const int MAX = 100;

bool checksEqualLines(int matrix[][MAX], int dimensionI, int dimensionJ);

int main() {
    int dimensionI, dimensionJ, fill;
    cin >> dimensionI >> dimensionJ;

    int matrix[MAX][MAX];

    for(int i = 0; i < dimensionI; i++) {
        for(int j = 0; j < dimensionJ; j++) {
            cin >> fill;
            matrix[i][j] = fill;
        }
    }

    if(checksEqualLines(matrix, dimensionI, dimensionJ))
        cout << "A matriz tem linhas repetidas";
    else 
        cout << "A matriz nao tem linhas repetidas";

    return 0;
}

bool checksEqualLines(int matrix[][MAX], int dimensionI, int dimensionJ) {
    int count1 = 0, count2 = 0;

    for(int i = 0; i < dimensionI; i++) {
        for(int j = 0; j < dimensionJ; j++) {
            for(int k = 0; k < dimensionJ; k++) {
                if(matrix[i][k] == matrix[j][k])
                    count1++;
            }
            if(count1 == dimensionJ)
                count2++;
            count1 = 0;
        }
    }

    if(count2 > dimensionJ)
        return true;
    else
        return false;
}