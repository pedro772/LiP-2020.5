#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void substitute(string sentence, char removeThis);

int main() {
    string sentence;
    getline(cin, sentence);

    char removeThis;
    cin >> removeThis;

    cout << sentence << " =>" << endl;

    substitute(sentence, removeThis);

    return 0;
}

void substitute(string sentence, char removeThis) {
    int strLen = sentence.size();
    string aux1 = sentence, aux2 = aux1;
 
    for(int i = 0; i < strLen; i++) {
        int indexToRemove = sentence.find(removeThis);

        if(indexToRemove > 0 && indexToRemove < strLen - 1) {
            aux1 = sentence.substr(0, (indexToRemove));
            aux2 = sentence.substr((indexToRemove + 1), (strLen - indexToRemove));
            sentence = aux1 + aux2;
        }
        else if(indexToRemove == 0) {
            aux1 = sentence.substr(1, strLen - 1);
            sentence = aux1;
        }
        else if(indexToRemove == strLen - 1) {
            aux1 = sentence.substr(0, strLen - 2);
            sentence = aux1;
        }
    }

    cout << sentence;
}