#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {

    int valor;

    cout << "Digite um valor: ";
    cin >> valor;

    if(valor == 30)
        cout << "O valor é igual a " << valor << endl;
    else
        cout << "O valor não é igual a " << valor << endl;


    if(valor != 20)
        cout << "O valor não é igual a 30" << endl;

    getch();
    return 0;
}