#include <iostream>
using namespace std;

int main() {
    int base, exponente;
    cout << "Ingrese base y exponente: ";
    cin >> base >> exponente;

    int resultado=1;
    for(int i=0;i<exponente;i++) resultado*=base;

    cout << "Resultado: " << resultado << endl;
    return 0;
}
