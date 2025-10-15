#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numero, intento, contador = 0;
    srand(time(0));
    numero = rand() % 10 + 1;  // número entre 1 y 10

    do {
        cout << "Adivina el número (1-10): ";
        cin >> intento;
        contador++;

        if (intento < numero)
            cout << "Muy bajo.\n";
        else if (intento > numero)
            cout << "Muy alto.\n";
        else
            cout << "¡Correcto! Lo adivinaste en " << contador << " intentos.\n";

    } while (intento != numero);

    return 0;
}
