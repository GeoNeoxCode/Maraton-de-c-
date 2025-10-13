#include <iostream>
#include <stdexcept>
 
class MiExcepcion : public std::exception {
public:
    const char* what() const noexcept override {
        return "Esta es mi excepción personalizada";
    }
};
 
int main() {
    try {
        throw MiExcepcion();
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
 
    return 0;
}