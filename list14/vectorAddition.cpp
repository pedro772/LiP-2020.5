#include <iostream>
using namespace std;

int main() {
    int size, fill;
    cin >> size;

    int v1[size], v2[size], vSum[size];

    for(int i = 0; i < size; i++) {
        cin >> fill;
        v1[i] = fill;
    }

    for(int i = 0; i < size; i++) {
        cin >> fill;
        v2[i] = fill;
    }

    cout << "[ ";

    for(int i = 0; i < size; i++) {
        vSum[i] = v1[i] + v2[i];
        if(i < (size - 1))
            cout << vSum[i] << " , ";
        else
            cout << vSum[i] << " ]";
    }

    return 0;
}