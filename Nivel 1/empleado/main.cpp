#include <iostream>
using namespace std;

class Empleado {
public:
    string nombre;
    float sueldo;
    virtual float calcularSueldo(){ return sueldo; }
};

class EmpleadoBono : public Empleado {
public:
    float bono;
    float calcularSueldo(){ return sueldo + bono; }
};

int main(){
    EmpleadoBono e;
    cout << "Nombre: "; cin >> e.nombre;
    cout << "Sueldo: "; cin >> e.sueldo;
    cout << "Bono: "; cin >> e.bono;
    cout << "Sueldo total: " << e.calcularSueldo();
    return 0;
}
