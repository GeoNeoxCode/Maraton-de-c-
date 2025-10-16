#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número límite: ";
    cin >> n;

    cout << setw(10) << "Número" << setw(10) << "Cuadrado" << setw(10) << "Cubo" << endl;
    for (int i = 1; i <= n; i++) {
        cout << setw(10) << i << setw(10) << i * i << setw(10) << i * i * i << endl;
    }

    return 0;
}
