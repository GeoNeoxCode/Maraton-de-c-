#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>

using namespace std;


void tabla(int numerotabla) {   //Hecho por George Fernando Pelaez Carrera
    int resultado;
    for (int ii = 0; ii <= 12; ii++)
    {
        resultado = (numerotabla*ii);
        cout << numerotabla << "x" << ii << " = " << resultado << endl;
        this_thread::sleep_for(chrono::milliseconds(10));
    }
}

int main() {
  for (int i = 1; i <= 12; i++) {
     cout << "--Tabla del "<< i << "--" << endl;
     tabla(i);
  }
  getch();
 return 0;
}