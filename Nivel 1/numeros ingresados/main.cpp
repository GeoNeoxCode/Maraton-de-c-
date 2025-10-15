#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    cout << "Ingrese 5 números:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    cout << "Los números ingresados son:\n";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
}
