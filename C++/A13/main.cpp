#include <iostream>
#include <conio.h>

using namespace std;

//Função Generica;
template <class test>
test nica(test a);

int main() {

    cout << nica(10);

    getch();
    return 0;
};

//Função Generica;
template <class test>
test nica(test a) {
    return a + 1;
};