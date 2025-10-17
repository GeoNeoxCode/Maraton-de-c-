#include <iostream>
using namespace std;

int main(){
    int opcion;
    do{
        cout << "\nMENU\n1. Saludar\n2. Despedirse\n3. Salir\nOpcion: ";
        cin >> opcion;

        switch(opcion){
            case 1: cout << "Hola!\n"; break;
            case 2: cout << "Adios!\n"; break;
            case 3: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida\n";
        }
    } while(opcion != 3);
    return 0;
}
