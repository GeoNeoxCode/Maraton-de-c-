#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántas notas desea ingresar?: ";
    cin >> n;

    float suma = 0, nota;
    for (int i = 0; i < n; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> nota;
        suma += nota;
    }

    float promedio = suma / n;
    cout << "Promedio final: " << promedio << endl;

    if (promedio >= 7)
        cout << "Estado: Aprobado ✅" << endl;
    else
        cout << "Estado: Reprobado ❌" << endl;

    return 0;
}
