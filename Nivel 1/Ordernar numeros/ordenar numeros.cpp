#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera
    
    int vector[99];
    int i,aux,min,j;
    int entrada,cantidad;

    cout << "ingresa la cantidad de espacios que vas a utilizar "<< endl;
    cin >> cantidad;

    while (cantidad>100 || cantidad<0) {
        cout << "\nesa no es una cantidad valida" << endl;
        cin >> cantidad;
    }
    

    cout << "\tescoge una opcion" << endl;
    cout << "1. rellenar los espacios manualmente"<< endl;
    cout << "2. rellenar los espacios aleatoriamente" << endl;

    cin >> entrada;

    switch (entrada) {
        case 1: 
            cout << "agrega los numeros" << endl;

            for (i=0; i<=cantidad-1;i++) {
                cin >> vector[i];
            }
        break;

        case 2:
            srand(time(NULL));
            for (i=0; i<=cantidad-1; i++) {
                vector[i] = 1 + rand()%(100000);
            }
        break;
        default:
            cout << "esa opcion no existe" << endl;
            cin >> entrada;
    }

    for (i=0; i<cantidad;i++) {
        min = i;
        for (j=i; j<cantidad;j++) {
            if (vector[j] < vector[min]){
                min = j;
            }
        }   
        aux = vector[i];
        vector[i] = vector[min];
        vector[min] = aux;
    }   

    cout << "\norden de forma ascendente: " << endl;
    
    for (i=0;i<=cantidad-1;i++) {
        cout << vector[i] << " ";
    }
    cout <<"\norden de forma descendente: " << endl;
    for (i=cantidad-1;i>=0;i--) {
        cout << vector[i] << " ";
    }

    getch();
    return 0;
}