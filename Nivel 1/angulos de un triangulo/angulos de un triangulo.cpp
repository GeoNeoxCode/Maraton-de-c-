#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A
    double angulos;
    double resultado=0;

    cout << "introduce los angulos del triangulo" << endl;
    for (int i=1;i<=3;i++) {
        cin >> angulos;
        while (angulos<0) {
            cout << "ese valor no se puede utilizar" << endl;
            cin >> angulos;
        }
        resultado += angulos;
    }

    cout << "el resultado de la suma es de: " << fixed << setprecision(2) << resultado << endl;
    getch();
    return 0;
}