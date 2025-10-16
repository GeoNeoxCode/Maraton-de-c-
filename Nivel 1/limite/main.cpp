#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número límite: ";
    cin >> n;

    cout << "Números pares del 1 al " << n << ":\n";
    for (int i = 2; i <= n; i += 2)
        cout << i << " ";
    cout << endl;

    return 0;
}
