#include <iostream>
#include <string>

int main() {
    const double PI = 3.14159;
    const std::string MENSAJE_BIENVENIDA = "Bienvenido a mi programa!";

    std::cout << MENSAJE_BIENVENIDA << std::endl;
    std::cout << "El valor de PI es: " << PI << std::endl;

    // Esto causaría un error de compilacion: PI = 3.14;

    return 0;
}
