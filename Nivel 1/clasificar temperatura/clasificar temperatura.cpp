#include <iostream>
#include <conio.h>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A 
    float temperatura;
    int opcion;

    cout << "\tQue sistema vas a usar?" << endl;
    cout << "1.Grados celsius" << endl;
    cout << "2.Grados fahrentheit" << endl;
    cin >>opcion;
    switch (opcion) {

        case 1:
            cout << "ingresa la temperatura" << endl;
            cin >> temperatura;

            if (temperatura>=40) {
            cout <<"caliente" << endl;
            } else if (temperatura<=10) {
            cout << "frio" << endl;
            } else {
            cout <<" fresco" << endl;
            }
        break;

        case 2:
            cout << "ingresa la temperatura" << endl;
            cin >> temperatura;

            if (temperatura>=104) {
            cout <<"caliente" << endl;
            } else if (temperatura<=50) {
            cout << "frio" << endl;
            } else {
            cout <<" fresco" << endl;
            }
        break;
    
    default:
            cout << "esa no es una opcion valida" << endl;
            cin >> opcion;
    }
    
    getch();
    return 0;
}