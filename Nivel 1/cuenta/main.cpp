#include <iostream>
using namespace std;

class Cuenta {
public:
    string titular;
    double saldo;

    void depositar(double m){ saldo += m; }
    void retirar(double m){ if(m<=saldo) saldo-=m; else cout<<"Saldo insuficiente\n"; }
    void mostrar(){ cout << titular << ": " << saldo << endl; }
};

int main(){
    Cuenta c;
    cout << "Titular: "; cin >> c.titular;
    c.saldo = 0;
    c.depositar(200);
    c.retirar(50);
    c.mostrar();
    return 0;
}
