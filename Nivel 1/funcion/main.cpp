#include <iostream>
using namespace std;

int sumaArreglo(int arr[], int n){
    int suma=0;
    for(int i=0;i<n;i++) suma+=arr[i];
    return suma;
}

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Suma: " << sumaArreglo(arr,n) << endl;
    return 0;
}
