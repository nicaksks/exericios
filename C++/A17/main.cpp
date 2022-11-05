#include <iostream>
#include <conio.h>

using namespace std;

int fatorial(int n);

int main() {

    int n = 2;

    for(n=1; n<=10; n++) {
        cout << "Fatorial de " << n;
        cout << " = " << fatorial(n) << endl;
    };
    
    //cout << "Fatorial de " << n;
    //cout << " = " << fatorial(n) << endl;

    getch();
    return 0;
}

int fatorial(int n) {

    if(n < 2) return 1;

    return fatorial(n - 1) * n;
}