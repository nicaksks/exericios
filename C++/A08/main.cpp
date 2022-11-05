#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int i;
    int j;

    /*
    Contador;
    for(i=0; i < 10; i++) {
        cout << i+1 << endl;
    };
    */

    /*
    for(i=0; i < 10; i++) {
        //cout << i + 1 << " - ";

        for(j=0; j < 10; j++) {
            cout << "(" << i << "," << j << ") ";
        }

        cout << endl;
    };
    */

    //Countdown;
    for(i=10; i>0; i--) {
        cout << i << endl;
    }

    getch();
    return 0;
}