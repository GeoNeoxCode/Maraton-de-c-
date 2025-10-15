#include <iostream>
using namespace std;

int main() {
    int n, num, positivos = 0, negativos = 0, ceros = 0;

    cout << "¿Cuántos números desea ingresar? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el número " << i << ": ";
        cin >> num;

        if (num > 0)
            positivos++;
        else if (num < 0)
            negativos++;
        else
            ceros++;
    }

    cout << "\nPositivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros << endl;

    return 0;
}
