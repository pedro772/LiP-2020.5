#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void firstLetterUpper(string sentence);

int main() {
    string sentence;
    getline(cin, sentence);

    firstLetterUpper(sentence);

    return 0;
}

void firstLetterUpper(string sentence) {
    int phraseLen = sentence.size();

    sentence[0] = toupper(sentence[0]);
 
    for(int i = 0; i < phraseLen; i++) {
        if(sentence[i] == ' ')
            sentence[i + 1] = toupper(sentence[i + 1]);
    }

    cout << sentence;
}