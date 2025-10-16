#include <iostream>
using namespace std;

int main() {
    int a,b,op;
    cout << "Ingrese dos números: ";
    cin >> a >> b;

    cout << "1.Suma 2.Resta 3.Multiplicación 4.División\nOpción: ";
    cin >> op;

    switch(op){
        case 1: cout << "Suma: " << a+b << endl; break;
        case 2: cout << "Resta: " << a-b << endl; break;
        case 3: cout << "Multiplicación: " << a*b << endl; break;
        case 4: if(b!=0) cout << "División: " << (double)a/b << endl; else cout << "Error división entre 0\n"; break;
        default: cout << "Opción inválida\n";
    }

    return 0;
}
