#include <iostream>
#include <fstream>
using namespace std;

class Producto {
public:
    string nombre;
    float precio;

    void guardar(){
        ofstream archivo("productos.txt", ios::app);
        archivo << nombre << " " << precio << endl;
        archivo.close();
    }

    void mostrar(){ cout << "Producto: " << nombre << ", Precio: " << precio << endl; }
};

int main(){
    Producto p;
    cout << "Nombre del producto: "; cin >> p.nombre;
    cout << "Precio: "; cin >> p.precio;
    p.guardar();
    p.mostrar();
    return 0;
}
