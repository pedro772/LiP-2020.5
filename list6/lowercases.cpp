#include <iostream>
using namespace std;

int main() {
    int n, counter = 0;
    char input;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> input;

        input = int(input);

        if(97 <= input && input <= 122)
            counter++;
    }

    cout << counter;

    return 0;
}