#include <iostream>
 
using namespace std;
 
int main() {
    // Estructura if-else
    int edad = 20;
    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }
 
    // Estructura switch
    char calificacion = 'B';
    switch (calificacion) {
        case 'A':
            cout << "Excelente trabajo." << endl;
            break;
        case 'B':
            cout << "Buen trabajo." << endl;
            break;
        case 'C':
            cout << "Trabajo aceptable." << endl;
            break;
        default:
            cout << "Calificación no válida." << endl;
    }
 
    // Estructura while
    int contador = 0;
    while (contador < 5) {
        cout << "Contador: " << contador << endl;
        contador++;
    }
 
    // Estructura for
    for (int i = 0; i < 5; ++i) {
        cout << "Iteración: " << i << endl;
    }
 
    return 0;
}
