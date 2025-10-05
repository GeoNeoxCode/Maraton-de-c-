#include <iostream> 
#include <chrono>
#include <thread>
#include <conio.h>
using namespace std;

int i;
int numero;

int main() {    //Hecho por George Fernando Pelaez Carrera
    cout << "ingrese el numero" << endl;
    cin >> numero;

    for (i = 1; i<=numero; i++)
    {
        cout << i << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    getch();
    return 0;
}