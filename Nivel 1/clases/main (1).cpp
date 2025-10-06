#include <iostream>
#include <string>
 
using namespace std;
 
class Persona {
public:
    string nombre;
    int edad;
    double altura;
 
    void saludar() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }
};
 
int main() {
    Persona persona1;
    persona1.nombre = "Ana";
    persona1.edad = 30;
    persona1.altura = 1.65;
 
    persona1.saludar();
 
    return 0;
}