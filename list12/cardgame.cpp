#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int player1(char ref, char lowerRef, char upperRef, char pl1[]);
int player2(char ref, char lowerRef, char upperRef, char pl1[]);

int main() {
    int i;
    bool tie = false, winnerA = false, winnerB = false;
    char ref, lowerRef, upperRef, pl1[5], pl2[5];

    cin >> ref;

    if(isupper(ref)) {
        lowerRef = tolower(ref);
        upperRef = ref;
    } else {
        upperRef = toupper(ref);
        lowerRef = ref;
    }

    for(i = 0; i < 5; i++)
        cin >> pl1[i];
    for(i = 0; i < 5; i++)
        cin >> pl2[i];

    int pointsA = player1(ref, lowerRef, upperRef, pl1);
    int pointsB = player2(ref, lowerRef, upperRef, pl2);
    
    if(pointsA > pointsB)
        winnerA = true;
    if(pointsA == pointsB)
        tie = true;
    if(pointsB > pointsA)
        winnerB = true;

    cout << "Pontos A: " << pointsA;
    cout << " Pontos B: " << pointsB;
    
    if(tie)
        cout << " Empate";
    if(winnerA)
        cout << " Vencedor A";
    if(winnerB)
        cout << " Vencedor B";

    return 0;
}

int player1(char ref, char lowerRef, char upperRef, char pl1[]) {
    int i, points1 = 0;

    for(i = 0; i < 5; i++) {
        if(pl1[i] == lowerRef || pl1[i] == upperRef)
            points1 += 3;
        else if(isupper(ref)) {
            if(isupper(pl1[i]))
                points1 += 1;
        }
        else if(islower(ref)) {
            if(islower(pl1[i]))
                points1 += 1;
        }
    }

    return points1;
}

int player2(char ref, char lowerRef, char upperRef, char pl2[]) {
    int i, points2 = 0;

    for(i = 0; i < 5; i++) {
        if(pl2[i] == lowerRef || pl2[i] == upperRef)
            points2 += 3;
        else if(isupper(ref)) {
            if(isupper(pl2[i]))
                points2 += 1;
        }
        else if(islower(ref)) {
            if(islower(pl2[i]))
                points2 += 1;
        }
    }

    return points2;
}