#include <iostream>
using namespace std;

int main() {
    int n, num;
    cout << "Cantidad de elementos: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Número a buscar: ";
    cin >> num;

    bool encontrado=false;
    for(int i=0;i<n;i++) if(arr[i]==num) {encontrado=true; break;}

    if(encontrado) cout << "Número encontrado\n";
    else cout << "Número no encontrado\n";
    return 0;
}
