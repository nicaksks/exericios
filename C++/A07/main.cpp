#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {

    int number;

    cout << "Digite um valor ";
    cin >> number;

    switch(number) {

        //Maneiras
        case 1:
            cout << "O número digitado foi 1";
        break;

        case 2: cout << "O número digitado foi 2"; break;
        case 3: cout << "O número digitado foi 3"; break;
        case 4: cout << "O número digitado foi 4"; break;
        case 5: cout << "O número digitado foi 5"; break;

        //Caso não tenha uma opção ele irá retornar o default;
        default: cout << "I don't know"; break;
    };

    getch();
    return 0;
}