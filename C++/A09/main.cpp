#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int number = 0;

    /*
    while(number < 10) {
        cout << "Digite um número: ";
        cin >> number;
        if(number > 10)
            cout << "O contador vai ser finalizado. \nMotivo: O número escolhido é maior que 10";
        else
            cout << "O número escolhido não é maior que 10 \nEscolha um número maior que 10 para cancelar esse WHILE" << endl;
    }

    while(number < 10) {
        cout << number << endl;
        number++;
    };

    while(number < 10) {
        cout << number << endl;
        number += 2;
    };
    */

    while(number < 4) {
        cout << "Bem-vindo ao restaurante, faça o seu pedido \n\nMENU" << endl;
        cout << "1- Pizza" << endl;
        cout << "2- Cachorro Quente" << endl;
        cout << "3- Xis-tudo" << endl;
        cout << "4- Fechar menu" << endl;
        cout << "Digite o número do pedido: ";

        cin >> number;

        switch(number) {
            case 1: cout << "Sua Pizza está sendo preparada."; break;
            case 2: cout << "Seu Cachorro quente está sendo preparada."; break;
            case 3: cout << "Seu Xis-tudo está sendo preparada."; break;
            case 4: cout << "Volte sempre!"; break;

            default: break;

        }

    };

    getch();
    return 0;
}