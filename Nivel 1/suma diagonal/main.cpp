#include <iostream>
using namespace std;

int main() {
    int matriz[4][4], suma=0;
    cout << "Ingrese elementos de la matriz 4x4:\n";
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++){
            cin >> matriz[i][j];
            if(i+j==3) suma+=matriz[i][j];
        }

    cout << "Suma diagonal secundaria: " << suma << endl;
    return 0;
}
