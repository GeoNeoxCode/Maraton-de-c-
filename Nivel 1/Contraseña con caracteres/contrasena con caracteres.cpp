#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera
    char contraseña[] = "Hola jeje";
    char logeo[15];

    cout << "ingresa la contraseña para iniciar sesion" << endl;
    cin.getline(logeo,15,'\n');

    if (strcmp(logeo,contraseña)==0) {
        cout << "bienvenido" << endl;
    } else {
        cout << "contraseña incorrecta" << endl;
    }
    getch();
    return 0;
}