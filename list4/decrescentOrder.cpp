#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, aux;

    cin >> n1 >> n2 >> n3;

    int numbers[3] = {n1, n2, n3};

    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(numbers[i] < numbers[j]) {
                aux = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = aux;
            }
        }
    }

    for(int i = 0; i < 3; i++)
        cout << numbers[i] << " ";

    return 0;
}