#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//headwers;
int test(int a, int b);
void text(string message);
void tabuada(int number);

int main() {

    int number;

    //cout << test(10, 10);
    //text("Olá");
    //tabuada(2);

    cout << "Qual tabuada você deseja saber? ";
    cin >> number;
    tabuada(number);

    getch();
    return 0;
};

int test(int a, int b) {
    return a + b;
};

void text(string message) {
    cout << endl;
    cout << "Message:" << message << endl;
    cout << endl;
};

void tabuada(int number) {
    cout << "Tabuda do " << number << endl;
    for(int i=1; i <=10; i++) {
        cout << number << " x " << i << " = " << (number*i) << endl;
    }
};