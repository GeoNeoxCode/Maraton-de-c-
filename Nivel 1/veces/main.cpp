#include <iostream>
using namespace std;

int main() {
    int n, buscar, contador = 0;
    cout << "¿Cuántos números va a ingresar? ";
    cin >> n;

    int numeros[n];
    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "¿Qué número desea buscar?: ";
    cin >> buscar;

    for (int i = 0; i < n; i++) {
        if (numeros[i] == buscar) contador++;
    }

    cout << "El número " << buscar << " aparece " << contador << " veces." << endl;
    return 0;
}
