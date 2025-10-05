#include <iostream>
#include <conio.h>
using namespace std;
int numero;
int resultado;

int main() {    //Hecho por George Fernando Pelaez Carrera
    cout << "ingrese el numero" << endl;
    cin >> numero;

    for (int i = 0; i <= numero; i++)
    {
        if (i%2 == 0) {
            resultado = (resultado + i);
        }
    }
    cout << "la suma de todos los pares entre 1 y " << numero << " es: ";
    cout << resultado;
    getch(); 
    return 0;
}