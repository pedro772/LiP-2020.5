#include <iostream>
#include <string>
using namespace std;

void biggestSequenceOfChar(string input, char toCompareSequence);

int main() {
    string input;
    char toCompareSequence;
    getline(cin, input);
    cin >> toCompareSequence;

    biggestSequenceOfChar(input, toCompareSequence);

    return 0;
}

void biggestSequenceOfChar(string input, char toCompareSequence) {
    int strLen = input.size(), count = 1, aux = 0;
 
    for(int i = 0; i < strLen; i++) {
        if(input[i] == toCompareSequence && input[i - 1] == toCompareSequence)
            count++;

        if(input.find(toCompareSequence) == -1)
            count = 0;

        if(count > aux)
            aux = count;

        if(input[i + 1] != toCompareSequence && input.find(toCompareSequence) != -1)
            count = 1;
    }

    cout << "String: " << input << endl << "Char: " << toCompareSequence << endl << "Tamanho: " << aux;
}