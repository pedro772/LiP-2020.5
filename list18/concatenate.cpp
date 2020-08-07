#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void concatenate(string sentence1, string sentence2);

int main() {
    string sentence1, sentence2;
    getline(cin, sentence1);
    getline(cin, sentence2);

    concatenate(sentence1, sentence2);

    return 0;
}

void concatenate(string sentence1, string sentence2) {
    cout << sentence1 << " ++ " << sentence2;
    cout << " = " << sentence1 << sentence2;
}