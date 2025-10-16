#include <iostream>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    for(int i = 0; i < texto.length(); i++) {
        if(texto[i] >= 'a' && texto[i] <= 'z')
            texto[i] = texto[i] - 32;
    }

    cout << "Texto en mayúsculas: " << texto << endl;
    return 0;
}
