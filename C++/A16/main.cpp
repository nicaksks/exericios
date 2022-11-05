#include <iostream>
#include <conio.h>
#include <stdarg.h>

using namespace std;

int soma(const int count, ...);

int main() {


    cout << "O resultado e: " << soma(3, 10, 10, 10) << endl;

    getch();
    return 0;
};

int soma(const int count, ...) {

    va_list list;
    int total = 0;

    va_start(list, count);

    for(int i=0; i < count; i++) {
        total += va_arg(list, int);
    };

    va_end(list);
    return total;
};