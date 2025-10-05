#include <iostream>
#include <conio.h>
using namespace std;    
float valorproducto;
float productoconIVA;

int main() {    // Hecho por George Fernando Pelaez Carrera  10MO A
    cout << "ingresa el valor del producto" << endl;
    cin >> valorproducto;

    productoconIVA = (valorproducto +(valorproducto * 0.16));

    cout << "el valor del producto con el IVA es de: " << productoconIVA << endl;
    
    getch();

    return 0;

}