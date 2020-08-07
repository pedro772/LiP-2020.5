#include <iostream>
#include <iomanip>
using namespace std;

float finalGrade(float numbers[]);
float crescrentOrder(float numbers[]);

int main() {
    float n1, n2, n3;

    cin >> n1 >> n2 >> n3;
    float numbers[3] = {n1, n2, n3};

    cout << fixed << setprecision(2) << crescrentOrder(numbers);

    return 0;
}

float finalGrade(float numbers[]) {
    float sum = 0, fGrade;
    for(int i = 0; i < 3; i++)
        sum += numbers[i];
    
    fGrade = 15 - (sum - numbers[0]);

    return fGrade;
}

float crescrentOrder(float numbers[]) {
    float aux;

    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(numbers[j] < numbers[i]) {
                aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }
        }
    }

    float result = finalGrade(numbers);

    return result;
}