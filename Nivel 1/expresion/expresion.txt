#include <iostream>
using namespace std;
 
int main() {
    int a = 10, b = 4;
    int suma = a + b;
    int resta = a - b;
    int multiplicacion = a * b;
    int division = a / b;
    int modulo = a % b;
 
    int c = 15;
    c += 5;
    c -= 3;
    c *= 2;
    c /= 4;
    c %= 3;
 
    bool esMayor = a > b;
    bool esMenor = a < b;
    bool igual = a == b;
    bool noIgual = a != b;
    bool mayorIgual = a >= b;
    bool menorIgual = a <= b;
 
    bool condicion1 = true;
    bool condicion2 = false;
    bool resultadoAnd = condicion1 && condicion2;
    bool resultadoOr = condicion1 || condicion2;
    bool resultadoNot = !condicion1;
 
    int contador = 0;
    contador++;
    contador--;
 
    int x = 5;
    int y = 3;
    int resultadoExpresion = x * (y + 2) - (x + y) / 2;
 
    cout << "Operadores aritméticos:" << endl;
    cout << "Suma: " << suma << ", Resta: " << resta << ", Multiplicación: " << multiplicacion << endl;
    cout << "División: " << division << ", Módulo: " << modulo << endl;
 
    cout << "\nOperadores de asignación:" << endl;
    cout << "c: " << c << endl;
 
    cout << "\nOperadores de comparación:" << endl;
    cout << "esMayor: " << esMayor << ", esMenor: " << esMenor << ", igual: " << igual << endl;
 
    cout << "\nOperadores lógicos:" << endl;
    cout << "resultadoAnd: " << resultadoAnd << ", resultadoOr: " << resultadoOr << ", resultadoNot: " << resultadoNot << endl;
 
    cout << "\nOperadores de incremento y decremento:" << endl;
    cout << "contador: " << contador << endl;
 
    cout << "\nExpresión:" << endl;
    cout << "Resultado de la expresión: " << resultadoExpresion << endl;
 
    return 0;
}