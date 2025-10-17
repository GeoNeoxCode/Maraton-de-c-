#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Cantidad de calificaciones: ";
    cin >> n;
    float notas[n], suma=0;
    for(int i=0;i<n;i++){
        cin >> notas[i];
        suma += notas[i];
    }

    float prom = suma/n;
    cout << "Promedio: " << prom << "\nNotas superiores al promedio: ";
    for(int i=0;i<n;i++)
        if(notas[i]>prom) cout << notas[i] << " ";
    return 0;
}
