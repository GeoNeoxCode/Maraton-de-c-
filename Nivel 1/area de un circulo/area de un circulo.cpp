#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A
    const double pi = 3.141592654;
    double radio;
    double area;

    cout << "ingrese el radio del circulo" << endl;
    cin >> radio;

    area = pi* pow(radio,2);
    cout << "el area del circulo con radio de: " << radio << " es:"<< area << endl;
    getch();
    return 0;
}