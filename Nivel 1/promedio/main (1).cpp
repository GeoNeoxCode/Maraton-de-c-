#include <iostream>
 
using namespace std;
 
// Función que toma dos enteros como argumentos y devuelve su suma
int sumar(int a, int b) {
    return a + b;
}
 
// Función que toma un double y un valor predeterminado, y devuelve su promedio
double calcularPromedio(double a, double b = 0.0) {
    return (a + b) / 2;
}
 
// Función que no toma argumentos y no devuelve valor (void)
void saludar() {
    cout << "¡Hola desde la función de saludo!" << endl;
}
 
int main() {
    int num1 = 10, num2 = 20;
    int resultadoSuma = sumar(num1, num2);
    cout << "La suma es: " << resultadoSuma << endl;
 
    double nota1 = 85.5, nota2 = 92.0;
    double promedio = calcularPromedio(nota1, nota2);
    cout << "El promedio es: " << promedio << endl;
 
    saludar();
 
    return 0;
}