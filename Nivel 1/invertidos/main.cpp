#include <iostream>
using namespace std;

int main() {
    int num, invertido = 0, resto;

    cout << "Ingrese un número: ";
    cin >> num;

    while (num != 0) {
        resto = num % 10;
        invertido = invertido * 10 + resto;
        num /= 10;
    }

    cout << "Número invertido: " << invertido << endl;
    return 0;
}
