#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;


int main(){     //Hecho por George Fernando Pelaez Carrera 10MO A
    char palabra[39];
    int cantidad;
    cout << "\tingresa la plabra\n" << endl;

    cin.getline(palabra,39,'\n');
    cantidad = strlen(palabra);

    cout <<"la palabra al reves es: ";
    for (int i=cantidad-1; i>=0;i--) {
        cout << palabra[i];
    }
    
    getch();
    return 0;
}