#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, promedio;

    cout << "Ingrese las tres notas: ";
    cin >> n1 >> n2 >> n3;

    promedio = (n1 + n2 + n3) / 3;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}
