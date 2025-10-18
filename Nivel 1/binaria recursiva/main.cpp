#include <iostream>
using namespace std;

int busquedaBinaria(int arr[], int low, int high, int x){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==x) return mid;
    else if(arr[mid]<x) return busquedaBinaria(arr, mid+1, high, x);
    else return busquedaBinaria(arr, low, mid-1, x);
}

int main(){
    int n;
    cout << "Cantidad de elementos (ordenados): "; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int x;
    cout << "Elemento a buscar: "; cin >> x;
    int pos=busquedaBinaria(arr,0,n-1,x);
    if(pos!=-1) cout << "Elemento encontrado en posicion " << pos;
    else cout << "Elemento no encontrado";
    return 0;
}
