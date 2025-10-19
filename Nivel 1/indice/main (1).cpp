#include <iostream>

int main() {
    // Declarar e inicializar un arreglo de 5 enteros
    int numeros[5] = {10, 20, 30, 40, 50};
    
    std::cout << "Elementos del arreglo:" << std::endl;
    
    // Recorrer el arreglo e imprimir cada elemento
    for (int i = 0; i < 5; i++) {
        std::cout << "El elemento en el indice " << i << " es: " << numeros[i] << std::endl;
    }
    
    return 0;
}