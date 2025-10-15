#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres números: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "El número mayor es: " << a << endl;
    else if (b >= a && b >= c)
        cout << "El número mayor es: " << b << endl;
    else
        cout << "El número mayor es: " << c << endl;

    return 0;
}
