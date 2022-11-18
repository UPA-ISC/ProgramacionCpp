/*
Autor:
Fecha:
Descripcion:
*/
#include <unistd.h>
#include <iostream>

using namespace std;

// gotoxy() function definition
void gotoxy(int x, int y) { cout << "\033[" << y << ";" << x << "f"; }

int main() {
    int retardo = 50000;
    for (int x = 1; x < 50; x++) {
        gotoxy(x, 3);
        system("clear");
        cout << "Hola " << x;
        cout.flush(); //Limpiar la cadena
        usleep(retardo);
    }
    for (int x = 50; x > 1; x--) {
        gotoxy(x, 3);
        system("clear");
        cout << "Hola "<< x;
        cout.flush(); //Limpiar la cadena
        usleep(retardo);
    }

    cout << endl;

    return 0;
}
