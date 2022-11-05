#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void number(int &);
void number(string mensagem);
//void number(int *);
//void number(int *numero);

int main() {

    int numero = 10;
    number(numero);

    cout << "O numero do ponteiro e: " << numero << endl; 
    cout << endl;

    number("Ola, mundo! \n2 Functions com o mesmo nome.");

    getch();
    return 0;
};

void number(int &numero) {
    numero++;
    cout <<  "O numero e: " << numero << endl;
};

void number(string mensagem) {
    cout << "Mensagem: " << mensagem << endl;
} 

//void number(int *numero) {
    //++*numero;
    //cout <<  "O numero e: " << *numero << endl;
//};

//void number(int numero) {
    //qcout <<  "O numero e: " << numero << endl;
//};