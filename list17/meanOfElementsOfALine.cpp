#include <iostream>
using namespace std;

const int MAX = 30;

void checksBiggerThanMean(int matrix[][MAX], int dimensionI, int dimensionJ);

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

    checksBiggerThanMean(matrix, dimensionI, dimensionJ);

    return 0;
}

void checksBiggerThanMean(int matrix[][MAX], int dimensionI, int dimensionJ) {
    float sum = 0, mean[MAX];

    for(int i = 0; i < dimensionI; i++) {
        for(int j = 0; j < dimensionJ; j++) {
            sum += matrix[i][j];
        }
        mean[i] = sum / dimensionJ;
        sum = 0;
    }

    for(int i = 0; i < dimensionI; i++) {
        int count = 0;
        cout << "[ ";

        for(int j = 0; j < dimensionJ; j++) {
            if(matrix[i][j] >= mean[i] && j < dimensionJ - 1 && count > 0) {
                cout << " , " << matrix[i][j];
            }
            else if(matrix[i][j] >= mean[i] && j < dimensionJ - 1 && count == 0) {
                cout << matrix[i][j];
                count++;
            }
            else if(matrix[i][j] >= mean[i] && j == dimensionJ - 1 && count == 0) {
                cout << matrix[i][j] << " ]" << endl;
            }
            else if(matrix[i][j] >= mean[i] && j == dimensionJ - 1 && count > 0)
                cout << " , " << matrix[i][j] << " ]" << endl;

            else if(j == dimensionJ - 1)
                cout << " ]" << endl;
        }
    }
}