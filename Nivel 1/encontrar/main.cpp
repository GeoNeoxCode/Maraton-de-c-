#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> nombres = {"Ana", "Luis", "Pedro", "Maria"};
    string buscar;
    cout << "Nombre a buscar: ";
    cin >> buscar;

    auto it = find(nombres.begin(), nombres.end(), buscar);
    if (it != nombres.end())
        cout << "Encontrado en posición " << distance(nombres.begin(), it);
    else
        cout << "No encontrado.";
}
