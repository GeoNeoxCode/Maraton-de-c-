#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera
    char contrasena[] = "No se que poner";
    char bienvenidaGuardada[] = "Bienvenido ";
    char bienvenida[69];
    char nombre[49];
    char logeo[20];

    cout << "\ningresa tu nombre de usuario para iniciar sesion: ";
    cin.getline(nombre,49,'\n');
    cout << "ingresa la contraseña para iniciar sesion: ";
    cin.getline(logeo,20,'\n');

    if (strcmp(logeo,contrasena)==0) {

        strcpy(bienvenida,bienvenidaGuardada);
        strcat(bienvenida,nombre);
        cout << "\n"<<bienvenida << endl;

    } else {
        cout << "no se pudo iniciar sesion, contraseña incorrecta" << endl;
    }
    getch();
    return 0;
}