#include <iostream>
#include <conio.h>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A
    int vector1[4];
    int vector2[4];

    cout << "ingresa los valores" << endl;

    for (int i=0; i<=4; i++) {
        cout << "vector " << i+1 << ": "; 
        cin >>vector1[i];
    }
    cout << "los resultados son: " << endl;

    for (int i=0; i<=4; i++) {
        vector2[i]= vector1[i]*2;
        cout << vector2[i] << endl;
    }  

    getch();
    return 0;
}