#include <iostream>
#include <conio.h>
using namespace std;

int opcion;
double numero1;
double numero2;
double resultado;

int main() {    //Hecho Por George Fernando Pelaez Carrera
    cout << "¿Que opcion desea realizar?" << endl;
    cout << "1.Sumar" << endl;
    cout << "2.Restar" << endl;
    cout << "3.Multiplicar" << endl;
    cout << "4.Dividir" << endl;

    cin >> opcion;

    switch (opcion) {
    case 1:
        cout << "ingrese los dos numeros a sumar" << endl;
        cin >> numero1;
        cin >> numero2;

        resultado = (numero1+numero2);

        cout << "el resultado de la suma es: " << resultado << endl;
        break;
    case 2: 
        cout << "ingrese los dos numeros a restar" << endl;
        cin >> numero1;
        cin >> numero2;

        resultado = (numero1-numero2);

        cout << "el resultado de la resta es: " << resultado << endl;
        break;
    case 3:
        cout << "ingrese los dos numeros a multiplicar" << endl;
        cin >> numero1;
        cin >> numero2;

        resultado = (numero1*numero2);

        cout << "el resultado de la multiplicacion es: " << resultado << endl;
        break;
    case 4:
         cout << "ingrese los dos numeros a dividir" << endl;
        cin >> numero1;
        cin >> numero2;

        while (numero2==0) {
            cout << "no se puede dividir para cero" << endl;
            cin >> numero2;
        }

        resultado = (numero1/numero2);

        cout << "el resultado de la division es: " << resultado << endl;
        break;
        
    default:
        cout << "esa opcion no existe" << endl;
        break;
    }
    getch();
    return 0;
}