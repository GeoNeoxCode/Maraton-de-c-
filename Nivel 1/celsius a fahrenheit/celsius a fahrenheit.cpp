#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main() {    //Hecho por George Fernando Pelaez Carrera 10MO A
    float celsius;
    float fahrenheit = 32;

    cout << " ingresa los grados celsius" << endl;
    cin >> celsius;
    
    if (celsius>0) {
        for (int i= 0; i<celsius;i++) {
            fahrenheit += 1.8;
        }
    } else if (celsius<0) {
      for (int i= 0; i>celsius;i--) {
            fahrenheit -= 1.8;
        }  
    }

    cout << celsius << " grados celsius a fahrenheits son: " << fixed << setprecision(1) << fahrenheit << " grados fahrenheit" << endl;

    getch();
    return 0;
}