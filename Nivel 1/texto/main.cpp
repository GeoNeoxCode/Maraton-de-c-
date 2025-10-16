#include <iostream>
using namespace std;

int main() {
    string texto;
    char viejo, nuevo;
    cout << "Ingrese texto: ";
    getline(cin,texto);
    cout << "Carácter a reemplazar: ";
    cin >> viejo;
    cout << "Nuevo carácter: ";
    cin >> nuevo;

    for(int i=0;i<texto.length();i++)
        if(texto[i]==viejo) texto[i]=nuevo;

    cout << "Resultado: " << texto << endl;
    return 0;
}
