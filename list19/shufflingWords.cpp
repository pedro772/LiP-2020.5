#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void shuffle(string word1, string word2);

int main() {
    string word1, word2;
    getline(cin, word1);
    getline(cin, word2);

    shuffle(word1, word2);

    return 0;
}

void shuffle(string word1, string word2) {
    int word1Len = word1.size();
    int word2Len = word2.size();

    string word3 = word1 + word2;

    for(int i = 0; i < word1Len + word2Len; i++) {
        if(i == 0 || i % 2 == 0 && i / 2 < word1Len)
            word3[i] = word1[i / 2];
        else if(i / 2 < word1Len)
            word3[i] = word2[i / 2];
        else
            word3[i] = 
    }

    cout << word1 << " + " << word2 << " = " << word3;
}