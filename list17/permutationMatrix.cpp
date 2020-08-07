#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 30;

bool checksPermutation(int matrix[][MAX], int dimensions);

int main() {
    int dimensions, fill;
    cin >> dimensions;

    int matrix[MAX][MAX];

    for(int i = 0; i < dimensions; i++) {
        for(int j = 0; j < dimensions; j++) {
            cin >> fill;
            matrix[i][j] = fill;
        }
    }

    if(checksPermutation(matrix, dimensions))
        cout << "É matriz de permutação";
    else 
        cout << "Não é matriz de permutação";

    return 0;
}

bool checksPermutation(int matrix[][MAX], int dimensions) {
    int count0 = 0, count1;
    bool checksLine = true;

    for(int i = 0; i < dimensions; i++) {
        count1 = 0;
        for(int j = 0; j < dimensions; j++) {
            if(matrix[i][j] == 0)
                count0++;
            if(matrix[i][j] == 1)
                count1++;
        }
        if(count1 != 1)
            checksLine = false;
    }

    if(count0 == (pow(dimensions, 2) - dimensions) && checksLine)
        return true;
    else
        return false;
}