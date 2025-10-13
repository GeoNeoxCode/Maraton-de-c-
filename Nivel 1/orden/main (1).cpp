#include <iostream>
using namespace std;
 
#define max 100
 
void heapify(int A[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
 
    if (left < n && A[left] > A[largest]) {
        largest = left;
    }
 
    if (right < n && A[right] > A[largest]) {
        largest = right;
    }
 
    if (largest != i) {
        swap(A[i], A[largest]);
        heapify(A, n, largest);
    }
}
 
void heapSort(int A[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(A, n, i);
    }
 
    for (int i = n - 1; i >= 0; i--) {
        swap(A[0], A[i]);
        heapify(A, i, 0);
    }
}
 
int main() {
    int A[max], n;
    cout << "Ingresa la cantidad de elementos del arreglo: ";
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
 
    heapSort(A, n);
 
    cout << "El orden es:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << endl;
    }
 
    return 0;
}