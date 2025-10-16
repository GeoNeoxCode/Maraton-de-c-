#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int cpu, jugador;
    cout << "1.Piedra 2.Papel 3.Tijera\nIngrese su elección: ";
    cin >> jugador;

    cpu = rand()%3 + 1;
    cout << "CPU eligió: " << cpu << endl;

    if(jugador==cpu) cout << "Empate\n";
    else if((jugador==1 && cpu==3)||(jugador==2 && cpu==1)||(jugador==3 && cpu==2)) cout << "Ganaste\n";
    else cout << "Perdiste\n";

    return 0;
}
