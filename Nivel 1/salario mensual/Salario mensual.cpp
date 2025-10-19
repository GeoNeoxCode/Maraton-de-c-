#include <iostream>
#include <conio.h>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A
    float horas;
    float valor;
    float salario;

    cout << "introduca cuantas horas trabaja al dia" << endl;
    cin >> horas;
    while (horas<0 || horas>24) {
        cout << "eso no es posible" << endl;
        cin >> horas;
    }
    cout << "cuanto le pagan por hora?" << endl;
    cin >> valor;
    while (valor<0) {
        cout << "no se puede trabajar por ese salario" << endl;
        cin >> valor;
    }

    salario = valor*(horas*30);
    cout << "su salario es de: " << salario << "$" << endl;
    getch();
    return 0;
}