#include <iostream>
#include <conio.h>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A
    int year;

    cout << "ingresa el año" << endl;
    cin >> year;

    if (year>=2010&&year<=2019) {
        cout << "si pertenece" << endl;
    }

    getch();
    return 0;
}