#include <iostream>

int main() {
    int mi_numero = 20;
    int *puntero_a_numero; // Declara un puntero a un entero

    puntero_a_numero = &mi_numero; // Asigna la dirección de mi_numero al puntero

    std::cout << "Valor de mi_numero: " << mi_numero << std::endl;
    std::cout << "Direccion de mi_numero: " << &mi_numero << std::endl;
    std::cout << "Valor del puntero: " << puntero_a_numero << std::endl;
    std::cout << "Valor al que apunta el puntero: " << *puntero_a_numero << std::endl;

    return 0;
}
