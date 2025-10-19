#include <iostream>
#include <string>

class Coche {
public:
    std::string marca;
    int anio;

    // Constructor
    Coche(std::string m, int a) {
        marca = m;
        anio = a;
    }

    void mostrarDetalles() {
        std::cout << "Marca: " << marca << ", Anio: " << anio << std::endl;
    }
};

int main() {
    // Se llama al constructor al crear el objeto
    Coche mi_coche("Toyota", 2022);
    Coche otro_coche("Ford", 2023);

    mi_coche.mostrarDetalles();
    otro_coche.mostrarDetalles();

    return 0;
}
