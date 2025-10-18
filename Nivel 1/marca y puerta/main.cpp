#include <iostream>
using namespace std;

class Vehiculo {
public:
    string marca;
    void mostrar(){ cout << "Marca: " << marca << endl; }
};

class Coche : public Vehiculo {
public:
    int puertas;
    void mostrarCoche(){
        mostrar();
        cout << "Puertas: " << puertas << endl;
    }
};

int main(){
    Coche c;
    cout << "Marca: "; cin >> c.marca;
    cout << "Puertas: "; cin >> c.puertas;
    c.mostrarCoche();
    return 0;
}
