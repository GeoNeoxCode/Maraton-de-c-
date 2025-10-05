#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A
    int cantidad;
    char palabra[39];

    cout << "ingresa la palabra" << endl;
    cin.getline(palabra,39,'\n');
    cantidad = strlen(palabra);

    if (cantidad<10) {
        cout << "esa es una palabra pequeña, tiene menos de 10 caracteres" << endl;
    } else {
        cout << "esta palabra tiene " << cantidad << " caracteres" << endl;
    }

    getch();
    return 0;
}