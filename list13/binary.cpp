#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string binaryString(int num) {
    if(num == 0)
        return "0";
    else if(num == 1)
        return "1";
    else 
        return binaryString(num / 2) + binaryString(num % 2);
}

int main() {
    string bin = binaryString(28);
    int binLen = bin.size();
    string aux = bin;

    cout << bin << endl;

    for(int i = 0; i < binLen / 2; i++) {
        swap(aux[i], aux[binLen - i - 1]);
    }

    cout << aux;

    return 0;
}