#include <iostream>
#include <fstream>
using namespace std;

class Libro {
public:
    string titulo;
    string autor;

    void guardar(){
        ofstream archivo("libros.txt", ios::app);
        archivo << titulo << " - " << autor << endl;
        archivo.close();
    }

    void mostrar(){
        cout << "Titulo: " << titulo << ", Autor: " << autor << endl;
    }
};

int main(){
    Libro l;
    cout << "Titulo: "; cin.ignore(); getline(cin, l.titulo);
    cout << "Autor: "; getline(cin, l.autor);
    l.guardar();
    l.mostrar();
    return 0;
}
