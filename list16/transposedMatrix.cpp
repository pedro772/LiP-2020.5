#include <iostream>
using namespace std;

const int MAX = 30;

void transpose(int matrix[][MAX], int dimensionJ);

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

    cout << "Matriz" << endl;
    for(int i = 0; i < dimensionI; i++) {
        for(int j = 0; j < dimensionJ; j++) {
            if(j < (dimensionJ - 1))
                cout << matrix[i][j] << " ";
            else 
                cout << matrix[i][j] << endl;
        }
    }
    
    cout << "Transposta" << endl;
    transpose(matrix, dimensionJ);

    return 0;
}

void transpose(int matrix[][MAX], int dimensionJ) {
    int transposed[MAX][MAX];

    for(int i = 0; i < dimensionJ; i++) {
        for(int j = 0; j < dimensionJ; j++) {
            transposed[i][j] = matrix[j][i];
            if(j < (dimensionJ - 1))
                cout << transposed[i][j] << " ";
            else 
                cout << transposed[i][j] << endl;
        }
    }
}