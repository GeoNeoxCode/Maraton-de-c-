#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radio;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    float area = M_PI * pow(radio, 2);
    cout << "El área del círculo es: " << area << endl;
    return 0;
}
