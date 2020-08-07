#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void sort(vector<int> &raffle, int seed);
void gambleResult(int antonio[], int joao[], vector<int> raffle, int &countJoao, int &countAntonio);


int main() {
    int seed, antonio[3], joao[3], countJoao = 0, countAntonio = 0;
    vector<int> raffle;
    cin >> seed;

    for(int i = 0; i < 3; i++)
        cin >> antonio[i];

    for(int i = 0; i < 3; i++)
        cin >> joao[i];

    sort(raffle, seed);
    gambleResult(antonio, joao, raffle, countJoao, countAntonio);

    if(countAntonio == countJoao)
        cout << endl << "Empate";

    if(countAntonio > countJoao)
        cout << endl << "Antonio marcou mais pontos";

    if(countAntonio < countJoao)
        cout << endl << "Joao marcou mais pontos";
}

void sort(vector<int> &raffle, int seed) {
    int i, sort;
    srand(seed);

    cout << "sorteio: ";

    for(i = 0; i < 3; i++) {
        sort = rand() % 20 + 1;
        raffle.push_back(sort);
        cout << raffle[i] << " ";
    }
}

void gambleResult(int antonio[], int joao[], vector<int> raffle, int &countJoao, int &countAntonio) {
    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(antonio[i] == raffle[j])
                countAntonio++;
            if(joao[i] == raffle[j])
                countJoao++;
        }
    }
}