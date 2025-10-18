#include <iostream>
using namespace std;

char tablero[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void mostrar(){ for(int i=0;i<3;i++){ for(int j=0;j<3;j++) cout<<tablero[i][j]<<" "; cout<<endl; } }

int main(){
    mostrar();
    // Este ejemplo es inicial; se puede expandir para 2 jugadores
}
