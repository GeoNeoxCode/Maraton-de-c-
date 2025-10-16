#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    cout << base << "^" << exponente << " = " << pow(base, exponente) << endl;
    return 0;
}
