#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    int letras = 0;
    for (char c : frase) {
        if (isalpha(c)) letras++;
    }

    cout << "La frase tiene " << letras << " letras." << endl;
    return 0;
}
