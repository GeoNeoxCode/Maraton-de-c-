#include <iostream>
 
using namespace std;
 
// Función recursiva para calcular el factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
 
// Función recursiva para imprimir una cuenta regresiva
void cuentaRegresiva(int n) {
    if (n >= 0) {
        cout << n << " ";
        cuentaRegresiva(n - 1);
    } else {
        cout << "¡Despegue!" << endl;
    }
}
 
int main() {
    int numero = 5;
    unsigned long long resultadoFactorial = factorial(numero);
    cout << "El factorial de " << numero << " es: " << resultadoFactorial << endl;
 
    cout << "Cuenta regresiva: ";
    cuentaRegresiva(5);
 
    return 0;
}