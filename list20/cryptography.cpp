#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void encrypt(int key, string toEncrypt);
void decrypt(int key, string toDecrypt);

int main() {
    int key;
    cin >> key;

    cin.get();

    string toEncrypt, toDecrypt;
    getline(cin, toEncrypt);
    getline(cin, toDecrypt);

    cout << toEncrypt << " =>" << endl;
    encrypt(key, toEncrypt);

    cout << toDecrypt << " =>" << endl;
    decrypt(key, toDecrypt);

    return 0;
}

void encrypt(int key, string toEncrypt) {
    int strLen = toEncrypt.size();

    for(int i = 0; i < strLen; i++) {
        int charIndex = int(toEncrypt[i]);

        if(isalpha(toEncrypt[i])) {
            if(i % 2 == 0) {
                if(islower(toEncrypt[i])) {
                    if(charIndex + key <= 122)
                        toEncrypt[i] = char(charIndex + key);
                    else
                        toEncrypt[i] = char(charIndex + key - 26);
                }

                if(isupper(toEncrypt[i])) {
                    if(charIndex + (key * 2) <= 90)
                        toEncrypt[i] = char(charIndex + (key * 2));
                    else
                        toEncrypt[i] = char(charIndex + (key * 2) - 26);
                }
            }

            else {
                if(i % 2 != 0) {
                    if(islower(toEncrypt[i])) {
                        if(charIndex - key >= 97)
                            toEncrypt[i] = char(charIndex - key);
                        else
                            toEncrypt[i] = char(charIndex - key + 26);
                    }                
                }

                if(isupper(toEncrypt[i])) {
                    if(charIndex - (key * 3) >= 65)
                        toEncrypt[i] = char(charIndex - (key * 3));
                    else
                        toEncrypt[i] = char(charIndex - (key * 3) + 26);
                }
            }
        }
    }

    cout << toEncrypt << endl;
}

void decrypt(int key, string toDecrypt) {
    int strLen = toDecrypt.size();

    for(int i = 0; i < strLen; i++) {
        int charIndex = int(toDecrypt[i]);

        if(isalpha(toDecrypt[i])) {
            if(i % 2 == 0) {
                if(islower(toDecrypt[i])) {
                    if(charIndex - key >= 97)
                        toDecrypt[i] = char(charIndex - key);
                    else
                        toDecrypt[i] = char(charIndex - key + 26);
                }

                if(isupper(toDecrypt[i])) {
                    if(charIndex - (key * 2) >= 65)
                        toDecrypt[i] = char(charIndex - (key * 2));
                    else
                        toDecrypt[i] = char(charIndex - (key * 2) + 26);
                }
            }

            else {
                if(i % 2 != 0) {
                    if(islower(toDecrypt[i])) {
                        if(charIndex + key <= 122)
                            toDecrypt[i] = char(charIndex + key);
                        else
                            toDecrypt[i] = char(charIndex + key - 26);
                    }                
                }

                if(isupper(toDecrypt[i])) {
                    if(charIndex + (key * 3) <= 90)
                        toDecrypt[i] = char(charIndex + (key * 3));
                    else
                        toDecrypt[i] = char(charIndex + (key * 3) - 26);
                }
            }
        }
    }

    cout << toDecrypt << endl;
}