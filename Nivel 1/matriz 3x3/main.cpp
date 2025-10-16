#include <iostream>
using namespace std;

int main() {
    char matriz[3][3];
    cout << "Ingrese caracteres de la matriz 3x3:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) cin >> matriz[i][j];

    int vocales=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            char c = tolower(matriz[i][j]);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vocales++;
        }

    cout << "Cantidad de vocales: " << vocales << endl;
    return 0;
}
