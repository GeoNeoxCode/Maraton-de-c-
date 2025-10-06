#include <iostream>
 
using namespace std;
 
int main() {
    int valores[] = {10, 20, 30, 40, 50};
    int* puntero = valores; // Asignación de dirección de memoria del primer elemento del arreglo
 
    cout << "Valores: ";
    for (int i = 0; i < 5; ++i) {
        cout << *puntero << " "; // Acceso al valor a través del puntero
        puntero++; // Avanzar al siguiente elemento
    }
    cout << endl;
 
    puntero = &valores[4]; // Reiniciar el puntero al último elemento del arreglo
 
    cout << "Valores (al revés): ";
    for (int i = 0; i < 5; ++i) {
        cout << *puntero << " ";
        puntero--; // Retroceder al elemento anterior
    }
    cout << endl;
 
    return 0;
}