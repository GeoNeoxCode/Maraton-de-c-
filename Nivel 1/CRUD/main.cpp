#include <iostream>
#include <vector>
using namespace std;

struct Alumno { string nombre; float nota; };

int main() {
    vector<Alumno> lista;
    int op;
    do {
        cout << "\n1.Agregar 2.Mostrar 3.Modificar 4.Eliminar 5.Salir\nOpción: ";
        cin >> op;
        if (op == 1) {
            Alumno a;
            cout << "Nombre: "; cin >> a.nombre;
            cout << "Nota: "; cin >> a.nota;
            lista.push_back(a);
        } else if (op == 2) {
            for (auto &a : lista)
                cout << a.nombre << " (" << a.nota << ")\n";
        } else if (op == 3) {
            string nom; cout << "Nombre a modificar: "; cin >> nom;
            for (auto &a : lista)
                if (a.nombre == nom) { cout << "Nueva nota: "; cin >> a.nota; }
        } else if (op == 4) {
            string nom; cout << "Nombre a eliminar: "; cin >> nom;
            for (int i = 0; i < lista.size(); i++)
                if (lista[i].nombre == nom) lista.erase(lista.begin() + i);
        }
    } while (op != 5);
}
