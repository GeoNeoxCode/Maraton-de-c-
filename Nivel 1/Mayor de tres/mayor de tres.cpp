#include <iostream>
#include <conio.h>
using namespace std;

double numero1;
double numero2;
double numero3;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A
    cout << "ingrese los tres numeros" << endl;
    cin >> numero1;
    cin >> numero2;
    cin >> numero3;

    if (numero1>numero2 and numero1>numero3) {
        cout << "el numero: " << numero1 << " es el mayor de los tres" << endl;
    } else if (numero2>numero1 and numero2>numero3) {
        cout << "el numero: " << numero2 << " es el mayor de los tres" << endl;
    } else {
        cout << "el numero: " << numero3 << " es el mayor de los tres" << endl;
    }
    
    getch();
    return 0;
}