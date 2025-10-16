#include <iostream>
using namespace std;

int main() {
    int horas, minutos, segundosTotales;
    cout << "Ingrese horas: ";
    cin >> horas;
    cout << "Ingrese minutos: ";
    cin >> minutos;

    segundosTotales = horas * 3600 + minutos * 60;

    cout << "Equivale a " << segundosTotales << " segundos." << endl;
    return 0;
}
