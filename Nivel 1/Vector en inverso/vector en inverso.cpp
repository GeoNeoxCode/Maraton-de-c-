#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A
    int cantidad,i;
    int entrada;

    cout << "\tingresa la cantidad de vectores que deseas tener"<< endl;
    cin >> cantidad;

    float vector[cantidad];

    for(i=0; i<cantidad; i++) {
        cout <<"\t ingresa el valor"<< endl;
        cin >> entrada;
        vector[i] = entrada;
    }

    cout << "\tel orden es: " << endl;

    for((i=cantidad-1); i>=0; i--) {
        cout << vector[i] << endl;
    }
    
   system("pause");
return 0;
}