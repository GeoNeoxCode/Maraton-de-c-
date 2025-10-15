#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {
        cout << "\n--- MENÚ ---\n";
        cout << "1. Saludar\n";
        cout << "2. Mostrar fecha ficticia\n";
        cout << "3. Salir\n";
        cout << "Elija una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "¡Hola, usuario!\n";
                break;
            case 2:
                cout << "Hoy es 15 de octubre de 2025.\n";
                break;
            case 3:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida.\n";
        }
    } while (opcion != 3);

    return 0;
}
