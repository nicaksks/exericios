#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int number = 10;
    int *point;

    point = &number;

    cout << "O numero e: " << number << endl;
    cout << "Ponteiro desse numero e: " << &number << endl; 
    cout << endl;

    //Apontando para o valor do ponteiro o number;
    cout << "Ponteiro apontado: " << point << endl;
    //Pegando o que tem no ponteiro number;
    cout << "Pegando o item do ponteiro number: " << *point << endl;


    getch();
    return 0;
}