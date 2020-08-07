#include <iostream>
using namespace std;

void orderVector(int numbers[], int size);

int main() {
    int size, fill;
    cin >> size;

    int numbers[size];

    for(int i = 0; i < size; i++) {
        cin >> fill;
        numbers[i] = fill;
    }

    orderVector(numbers, size);

    return 0;
}

void orderVector(int numbers[], int size) {
    int aux;

    cout << "[ ";
    for(int i = 0; i < size; i++) {
        if(i < size - 1)
            cout << numbers[i] << " , ";
        else
            cout << numbers[i] << " ]" << endl;
    }

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(numbers[i] < numbers[j]) {
                aux = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = aux;
            }
        }
    }

    cout << "[ ";
    for(int i = 0; i < size; i++) {
        if(i < size - 1)
            cout << numbers[i] << " , ";
        else
            cout << numbers[i] << " ]";
    }
}