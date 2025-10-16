#include <iostream>
using namespace std;

int main() {
    int base, exponente, resultado = 1;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    for (int i = 1; i <= exponente; i++) {
        resultado *= base;
    }

    cout << base << "^" << exponente << " = " << resultado << endl;
    return 0;
}
