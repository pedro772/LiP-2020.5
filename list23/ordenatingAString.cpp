#include <iostream>
#include <string>
using namespace std;

void ordenateString(string toOrdenate);
void splitString(string toChange);

int main() {
    string input;
    getline(cin, input);

    cout << input << endl;
    splitString(input);

    return 0;
}

void splitString(string toChange) {
    int j = 0, k = 0;
    int strLen = toChange.size();
    string vowels = toChange, consonants = toChange;

    for(int i = 0; i < strLen; i++) {
        if(toChange[i] == 'a' || toChange[i] == 'e' || toChange[i] == 'i' || toChange[i] == 'o' ||  toChange[i] == 'u') {
            vowels[j] = toChange[i];
            j++;
        } else {
            consonants[k] = toChange[i];
            k++;
        }
    }

    vowels = vowels.substr(0, j);
    consonants = consonants.substr(0, k);

    ordenateString(vowels);
    ordenateString(consonants);
}

void ordenateString(string toOrdenate) {
    int size = toOrdenate.size();
    char aux;

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(int(toOrdenate[i]) > int(toOrdenate[j])) {
                aux = toOrdenate[j];
                toOrdenate[j] = toOrdenate[i];
                toOrdenate[i] = aux;
            }
        }
    }

    cout << toOrdenate;
}