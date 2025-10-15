#include <iostream>
using namespace std;

int main() {
    float base, altura;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;

    float area = (base * altura) / 2;
    cout << "El área del triángulo es: " << area << endl;

    return 0;
}
