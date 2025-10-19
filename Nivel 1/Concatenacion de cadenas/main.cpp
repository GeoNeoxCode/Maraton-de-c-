#include <iostream>
#include <string>

// Funcion para sumar dos enteros
int sumar(int a, int b) {
    return a + b;
}

// Funcion sobrecargada para sumar tres enteros
int sumar(int a, int b, int c) {
    return a + b + c;
}

// Funcion sobrecargada para concatenar cadenas
std::string sumar(std::string a, std::string b) {
    return a + b;
}

int main() {
    std::cout << "Suma de dos enteros: " << sumar(5, 10) << std::endl;
    std::cout << "Suma de tres enteros: " << sumar(5, 10, 15) << std::endl;
    std::cout << "Concatenacion de cadenas: " << sumar("Hola", " Mundo") << std::endl;
    return 0;
}
