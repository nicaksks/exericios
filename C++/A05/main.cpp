#include <iostream>
#include <string>

using namespace std;

int main() {

    float a, b;
    a = 30;
    b = 10;

    //or
    //float a = 30, b = 20;

    int adicao, sub, multi;
    float divisao;
    //float divisao, resto;
    
    adicao = a + b;
    sub = a - b;
    multi = a * b;
    divisao = a / b;
    //resto = a % b;

    cout << "A + B e igual: " << adicao << endl;
    cout << "A - B e igual: " << sub << endl;
    cout << "A * B e igual: " << multi << endl;
    cout << "A / B e igual: " << divisao << endl;
    //cout << "Resto da divisao: " << resto << endl;

    return 0;
}