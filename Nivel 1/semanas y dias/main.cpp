#include <iostream>
using namespace std;

int main() {
    int dias;
    cout << "Ingrese la cantidad de días: ";
    cin >> dias;

    int semanas = dias / 7;
    int resto = dias % 7;

    cout << dias << " días equivalen a " << semanas << " semana(s) y " << resto << " día(s).\n";
    return 0;
}
