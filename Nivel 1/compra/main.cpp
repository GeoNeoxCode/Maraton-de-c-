#include <iostream>
using namespace std;

int main() {
    float total, descuento, totalFinal;

    cout << "Ingrese el total de la compra: $";
    cin >> total;

    if (total > 100)
        descuento = total * 0.10;
    else
        descuento = 0;

    totalFinal = total - descuento;

    cout << "Descuento aplicado: $" << descuento << endl;
    cout << "Total a pagar: $" << totalFinal << endl;

    return 0;
}
