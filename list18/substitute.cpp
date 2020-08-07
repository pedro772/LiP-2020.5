#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void substitute(string sentence, char switch1, char switch2);

int main() {
    string sentence;
    getline(cin, sentence);

    char switch1, switch2;
    cin >> switch1 >> switch2;

    cout << sentence << " =>" << endl;

    substitute(sentence, switch1, switch2);

    return 0;
}

void substitute(string sentence, char switch1, char switch2) {
    int inputLen = sentence.size();
 
    for(int i = 0; i < inputLen; i++) {
        bool changed = false;

        if(sentence[i] == switch1) {
            sentence[i] = switch2;
            changed = true;
        }
        if(sentence[i] == switch2 && !changed)
            sentence[i] = switch1;
    }

    cout << sentence;
}