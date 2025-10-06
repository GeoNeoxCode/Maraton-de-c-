#include <iostream>
#include <conio.h>
using namespace std;

double minutos;
double horas;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A
    cout << "ingrese los minutos" << endl;
    cin >> minutos;

    horas = (minutos / 60);

    cout << minutos << " equivale a: " << horas << " hora/s";

    getch();
    return 0;
}