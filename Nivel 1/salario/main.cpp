#include <iostream>
using namespace std;

int main() {
    float horas, pagoHora, salario;
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese el pago por hora: ";
    cin >> pagoHora;

    salario = horas * pagoHora;
    cout << "El salario semanal es: $" << salario << endl;

    return 0;
}
