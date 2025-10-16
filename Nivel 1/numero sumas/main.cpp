#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cuántos números desea ingresar: ";
    cin >> n;

    float numeros[n], suma = 0;
    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    cout << "El promedio es: " << suma / n << endl;
    return 0;
}

