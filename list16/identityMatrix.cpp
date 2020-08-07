#include <iostream>
using namespace std;

int main() {
    int dimensions;
    cin >> dimensions;

    int identity[dimensions][dimensions];
    for(int i = 0; i < dimensions; i++) {
        for(int j = 0; j < dimensions; j++) {
            if(i == j)
                identity[i][j] = 1;
            else
                identity[i][j] = 0;
            cout << identity[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}