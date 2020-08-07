#include <iostream>
using namespace std;

int main() {
    float average, fill, sum = 0;
    int size, aboveAverage = 0;;
    cin >> size;

    int v[size];

    for(int i = 0; i < size; i++) {
        cin >> fill;
        v[i] = fill;
        sum += fill;
    }
    
    average = sum / size;

    cout << "Media: " << average << endl;

    for(int i = 0; i < size; i++) {
        if(v[i] > average)
            aboveAverage++;
    }

    cout << "Valores acima da media: " << aboveAverage;

    return 0;
}