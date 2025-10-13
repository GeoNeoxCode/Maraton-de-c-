#include <iostream>
 
template <typename T>
class MiContenedor {
public:
    MiContenedor(T valor) : valor_(valor) {}
 
    T obtenerValor() const {
        return valor_;
    }
 
private:
    T valor_;
};
 
template <>
class MiContenedor<const char*> {
public:
    MiContenedor(const char* valor) : valor_(valor) {}
 
    const char* obtenerValor() const {
        return valor_;
    }
 
private:
    const char* valor_;
};
 
int main() {
    MiContenedor<int> intContainer(42);
    MiContenedor<const char*> strContainer("Hola");
 
    std::cout << "Valor int: " << intContainer.obtenerValor() << std::endl;
    std::cout << "Valor string: " << strContainer.obtenerValor() << std::endl;
 
    return 0;
}