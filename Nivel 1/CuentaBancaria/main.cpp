#include <iostream>
using namespace std;

class CuentaBancaria {
public:
    string titular;
    double saldo;
    void depositar(double m){ saldo += m; }
    void retirar(double m){ if(m<=saldo) saldo-=m; else cout << "Saldo insuficiente\n"; }
    void mostrar(){ cout << titular << ": " << saldo << endl; }
};

int main(){
    CuentaBancaria c;
    cout << "Titular: "; cin >> c.titular;
    c.saldo=0;
    int opcion;
    do{
        cout << "\nMENU\n1. Depositar\n2. Retirar\n3. Mostrar\n4. Salir\nOpcion: ";
        cin >> opcion;
        double monto;
        switch(opcion){
            case 1: cout << "Monto: "; cin >> monto; c.depositar(monto); break;
            case 2: cout << "Monto: "; cin >> monto; c.retirar(monto); break;
            case 3: c.mostrar(); break;
        }
    } while(opcion!=4);
    return 0;
}
