#include <iostream>
#include <fstream>
using namespace std;

struct Person {
    string name, lastName, address, cpf, phoneNumber;
};

void write(Person persons[], int num);
void print();

int main() {
    int numberOfPeople;
    cin >> numberOfPeople;

    Person persons[numberOfPeople];

    cin.ignore();
    
    for(int i = 0; i < numberOfPeople; i++) {
        getline(cin, persons[i].cpf);
        getline(cin, persons[i].name);
        getline(cin, persons[i].lastName);
        getline(cin, persons[i].address);
        getline(cin, persons[i].phoneNumber);
    }

    write(persons, numberOfPeople);
    print();

    return 0;
}

void write(Person persons[], int reps) {
    ofstream writeOnSheet("sheet.csv");

    for(int i = 0; i < reps; i++) {
        writeOnSheet << persons[i].cpf << ";";
        writeOnSheet << persons[i].name << ";";
        writeOnSheet << persons[i].lastName << ";";
        writeOnSheet << persons[i].address << ";";
        writeOnSheet << persons[i].phoneNumber << endl;
    }

    writeOnSheet.close();
}

void print() {
    string info;
    ifstream readInSheet("sheet.csv");

    while(getline(readInSheet, info)) {
        cout << info << endl;
    }

    readInSheet.close();
}