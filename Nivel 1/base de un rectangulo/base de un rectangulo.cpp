#include <iostream>  
#include <stdlib.h>
double base;
double altura;              
double area;

using namespace std;    
int main() {    // Hecho por George Fernando Pelaez Carrera  10MO A
    cout << "ingrese la base del rectangulo" << endl;
    cin >> base;
    cout << "ingrese la altura del rectangulo" << endl;
    cin >> altura;

    area = (base*altura);

    cout << "el area del rectangulo es: " << area << endl;

    system("pause");

    return 0;
}

