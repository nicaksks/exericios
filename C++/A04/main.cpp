#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int a, b, c;

    cout << "Qual e o valor de A: ";
    cin >> a;

    cout << "Qual é o valor de B: ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "O valor de A e: " << a << endl;
    cout << "O valor de B e: " << b << endl;

    getch();
    return 0;
}