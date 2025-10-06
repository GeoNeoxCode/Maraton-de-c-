
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
#include <iostream>
 
using namespace std;
 
// Declaración de función
int sumar(int a, int b);
 
// Declaración de función con valores predeterminados
double calcularPromedio(double a, double b = 0.0);
 
int main() {
    int num1 = 10, num2 = 20;
    int resultado = sumar(num1, num2);
    cout << "La suma es: " << resultado << endl;
 
    double nota1 = 85.5, nota2 = 92.0;
    double promedio = calcularPromedio(nota1, nota2);
    cout << "El promedio es: " << promedio << endl;
 
    return 0;
}
 
// Definición de función
int sumar(int a, int b) {
    return a + b;
}
 
// Definición de función
double calcularPromedio(double a, double b) {
    return (a + b) / 2;
}