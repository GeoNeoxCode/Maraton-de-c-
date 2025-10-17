#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "1. Sumar\n2. Restar\n3. Salir\nElija una opción: ";
    cin >> opcion;
    switch (opcion) {
        case 1: cout << "Eligió sumar"; break;
        case 2: cout << "Eligió restar"; break;
        case 3: cout << "Saliendo..."; break;
        default: cout << "Opción no válida";
    }
    return 0;
}
