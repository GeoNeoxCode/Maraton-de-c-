#include <iostream>
#include <string>

int main() {
    std::string nombre = "Juan";
    std::string apellido = "Perez";
    std::string nombre_completo = nombre + " " + apellido;

    std::cout << "Nombre completo: " << nombre_completo << std::endl;
    std::cout << "Longitud de la cadena: " << nombre_completo.length() << std::endl;

    // Concatenar una cadena
    nombre_completo += ", desarrollador";
    std::cout << "Cadena modificada: " << nombre_completo << std::endl;

    return 0;
}
