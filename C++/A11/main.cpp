#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {

    //int m[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int i;

    //Selecionado o item da matriz;
    //cout << m[5];

    //Correndo por toda a matriz de 0 a 10;
    //for(i=0; i < 10; i++)
        //cout << m[i] << endl;
     
    string m[] = { "lorde", "tuts", "servinhu", "cat", "anjits", "docin", "undedi", "jorgin", "dvirk", "peko" };
    int size = sizeof(m);
    cout << "Tamanho da Array e: " << size << endl;

    for(i=0; i < size; i++)
        cout << m[i] << endl;

    getch();
    return 0;
}