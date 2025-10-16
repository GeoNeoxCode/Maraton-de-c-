#include <iostream>
using namespace std;

int main() {
    int num, original, invertido = 0, resto;
    cout << "Ingrese un número: ";
    cin >> num;

    original = num;
    while (num != 0) {
        resto = num % 10;
        invertido = invertido * 10 + resto;
        num /= 10;
    }

    if (original == invertido)
        cout << "El número es capicúa." << endl;
    else
        cout << "El número NO es capicúa." << endl;

    return 0;
}
