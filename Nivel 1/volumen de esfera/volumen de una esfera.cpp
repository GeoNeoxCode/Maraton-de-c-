#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera
    const double pi = 	3.141592654;
    double radio;
    double volumen;

    cout << "ingresa el radio de la esfera" << endl;
    cin >> radio;

    volumen = (4/3)*(pi*pow(radio,3));

    cout << "el volumen de la esfera es de: " <<fixed<<setprecision(2)<< volumen << endl;

    getch();
    return 0;
}