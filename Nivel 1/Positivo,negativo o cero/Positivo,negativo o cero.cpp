#include <iostream>
#include <conio.h>
using namespace std;

double numero;

int main() {    //Hecho por George Fernando Pelaez Carrera
    cout << "Ingrese el numero" << endl;
    cin >> numero;

    if (numero>0) {
        cout << "el numero " << numero << " es positivo" << endl;
    } else if (numero<0) {
        cout << "el numero " << numero << " es negativo" << endl;
    } else {
        cout << "es cero" << endl;
    }
    
    getch();
    return 0;
}