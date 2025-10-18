#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sonido(){ cout << "Animal hace un sonido\n"; }
};

class Perro : public Animal {
public:
    void sonido(){ cout << "El perro ladra\n"; }
};

int main(){
    Animal *a;
    Perro p;
    a = &p;
    a->sonido();
    return 0;
}
