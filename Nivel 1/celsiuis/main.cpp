#include <iostream>
using namespace std;

int main() {
    double f;
    cout << "Ingrese temperatura en Fahrenheit: ";
    cin >> f;

    double c = (f-32)*5/9;
    cout << "Temperatura en Celsius: " << c << endl;
    return 0;
}
