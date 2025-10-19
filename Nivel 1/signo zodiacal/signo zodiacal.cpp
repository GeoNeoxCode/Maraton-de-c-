#include <iostream>
#include <conio.h>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A
    int opcion;
    int fecha;
    cout << "\n\tingresa tu mes de nacimiento\n" << endl;
    cout << "-------------------------------------------\n" << endl;
    cout << "1.Enero" << endl;
    cout << "2.Febrero" << endl;
    cout << "3.Marzo" << endl;
    cout << "4.Abril" << endl;
    cout << "6.Mayo" << endl;
    cout << "6.Junio" << endl;
    cout << "7.Julio" << endl;
    cout << "8.Agosto" << endl;
    cout << "9.Septiembra" << endl;
    cout << "10.Octubre" << endl;
    cout << "11.Noviembre" << endl;
    cout << "12.Diciembre" << endl;
    cout << "\n-------------------------------------------" << endl;
    cin >> opcion;

    switch (opcion){
    case 1:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=19) {
            cout << "eres capricornio" << endl;
        } else {
            cout << "eres acuario" << endl;
        }

        break;
    case 2:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=18) {
            cout << "eres acuario" << endl;
        } else {
            cout << "eres piscis" << endl;
        }
        break;
    case 3:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=20) {
            cout << "eres piscis" << endl;
        } else {
            cout << "eres aries" << endl;
        }
        break;
    case 4:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=19) {
            cout << "eres aries" << endl;
        } else {
            cout << "eres tauro" << endl;
        }
        break;
    case 5:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=20) {
            cout << "eres tauro" << endl;
        } else {
            cout << "eres geminis" << endl;
        }
        break;
    case 6:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=20) {
            cout << "eres geminis" << endl;
        } else {
            cout << "eres cancer" << endl;
        }
        break;
    case 7:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=22) {
            cout << "eres cancer" << endl;
        } else {
            cout << "eres leo" << endl;
        }
        break;
    case 8:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=23) {
            cout << "eres leo" << endl;
        } else {
            cout << "eres virgo" << endl;
        }   
        break;
    case 9:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=22) {
            cout << "eres virgo" << endl;
        } else {
            cout << "eres libra" << endl;
        }
        break;
    case 10:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=22) {
            cout << "eres libra" << endl;
        } else {
            cout << "eres escorpio" << endl;
        }
        break;
    case 11:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=21) {
            cout << "eres escorpio" << endl;
        } else {
            cout << "eres sagitario" << endl;
        }
        break;
    case 12:
        cout <<"ahora introduce tu dia de nacimiento" << endl;
        cin >> fecha;

        if (fecha<=21) {
            cout << "eres sagitario" << endl;
        } else {
            cout << "eres capricornio" << endl;
        }
        break;  
    default:
        cout << "ese mes no es valido" << endl;
        cin >> opcion;
    }

    getch();
    return 0;
}