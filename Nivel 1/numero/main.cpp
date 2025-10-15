#include <iostream>
 
using namespace std;
 
int main() {
    int num = 42;
    int& refNum = num; // Declaración de referencia
 
    cout << "Número: " << num << endl;
    cout << "Referencia: " << refNum << endl;
 
    refNum = 99; // Cambio a través de la referencia
    cout << "Número después del cambio: " << num << endl;
 
    return 0;
}
