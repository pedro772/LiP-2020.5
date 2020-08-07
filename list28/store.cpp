#include <iostream>
using namespace std;

const int MAX_CLIENTS = 1000;
const int MAX_PRODUCTS = 50;

struct Client {
    string name, address, email, cpf;
};

struct Date {
    int birthDay, birthMonth, birthYear;
};

struct Product {
    int code, amountStored;
    float price;
    string name;
};

struct Store {
    string name, address, phoneNumber;

    void print() {
        cout << "Loja: " << name << endl;
        cout << "Endereço: " << address << endl;
        cout << "Telefone: " << phoneNumber << endl;
    }
};

void birthdayPerson(int monthOutput, Date dates[MAX_CLIENTS], Client clients[MAX_CLIENTS], int numberOfClients);
void thinStorage(Product products[MAX_PRODUCTS], int numberOfProducts);
void clientInPosition(Client clients[MAX_CLIENTS], int clientPos, Date dates[1000]);
void productInPosition(Product products[MAX_PRODUCTS], int productPos);

int main() {
    int numberOfClients, numberOfProducts, monthOutput, clientPos, productPos;

    cin >> numberOfClients >> numberOfProducts;

    cin.ignore();

    Client clients[numberOfClients];
    Date dates[numberOfClients];
    Product products[numberOfProducts];
    Store store;

    getline(cin, store.name);
    getline(cin, store.address);
    getline(cin, store.phoneNumber);

    for(int i = 0; i < numberOfClients; i++) {
        getline(cin, clients[i].name);
        getline(cin, clients[i].address);
        getline(cin, clients[i].email);
        getline(cin, clients[i].cpf);
        
        cin >> dates[i].birthDay >> dates[i].birthMonth >> dates[i].birthYear; 

        if(i < numberOfClients - 1)
            cin.ignore();
    }

    for(int i = 0; i < numberOfProducts; i++) {
        cin >> products[i].code;

        cin.ignore();

        getline(cin, products[i].name);

        cin >> products[i].price >> products[i].amountStored;
    }

    cin >> monthOutput >> clientPos >> productPos;

    store.print();
    birthdayPerson(monthOutput, dates, clients, numberOfClients);
    thinStorage(products, numberOfProducts);
    clientInPosition(clients, clientPos, dates);
    productInPosition(products, productPos);

    return 0;
}

void birthdayPerson(int monthOutput, Date dates[MAX_CLIENTS], Client clients[MAX_CLIENTS], int numberOfClients) {
    switch (monthOutput) {
        case 1:
            cout << "Aniversariantes de janeiro: " << endl;
            break;
        case 2:
            cout << "Aniversariantes de fevereiro: " << endl;
            break;
        case 3:
            cout << "Aniversariantes de março: " << endl;
            break;
        case 4:
            cout << "Aniversariantes de abril: " << endl;
            break;
        case 5:
            cout << "Aniversariantes de maio: " << endl;
            break;
        case 6:
            cout << "Aniversariantes de junho: " << endl;
            break;
        case 7:
            cout << "Aniversariantes de julho: " << endl;
            break;
        case 8:
            cout << "Aniversariantes de agosto: " << endl;
            break;
        case 9:
            cout << "Aniversariantes de setembro: " << endl;
            break;
        case 10:
            cout << "Aniversariantes de outubro: " << endl;
            break;
        case 11:
            cout << "Aniversariantes de novembro: " << endl;
            break;
        case 12:
            cout << "Aniversariantes de dezembro: " << endl;
            break;
        
        default:
            break;
    }

    for(int i = 0; i < numberOfClients; i++) {
        if(dates[i].birthMonth == monthOutput)
            cout << clients[i].name << endl;
    }
}

void thinStorage(Product products[MAX_PRODUCTS], int numberOfProducts) {
    cout << "Produtos com estoque inferior a 10: " << endl;

    for(int i = 0; i < numberOfProducts; i++) {
        if(products[i].amountStored < 10)
            cout << products[i].name << endl;
    }  
}

void clientInPosition(Client clients[MAX_CLIENTS], int clientPos, Date dates[MAX_CLIENTS]) {
    cout << "Cliente na posição " << clientPos << ":" << endl;
    cout << "Nome: " << clients[clientPos].name << endl;
    cout << "Endereço: " << clients[clientPos].address << endl;
    cout << "Email: " << clients[clientPos].email << endl;
    cout << "CPF: " << clients[clientPos].cpf << endl;
    cout << "Data de nascimento: " << dates[clientPos].birthDay << "/";
    cout << dates[clientPos].birthMonth << "/" << dates[clientPos].birthYear << endl;
}

void productInPosition(Product products[MAX_PRODUCTS], int productPos) {
    cout << "Produto na posição: " << productPos << endl;
    cout << "Código: " << products[productPos].code << endl;
    cout << "Nome: " << products[productPos].name << endl;
    cout << "Preço: " << products[productPos].price << endl;
    cout << "Estoque: " << products[productPos].amountStored << endl;
}