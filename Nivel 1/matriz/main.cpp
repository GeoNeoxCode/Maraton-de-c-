#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], R[2][2];

    cout << "Ingrese la primera matriz:\n";
    for (int i=0; i<2; i++)
        for (int j=0; j<2; j++)
            cin >> A[i][j];

    cout << "Ingrese la segunda matriz:\n";
    for (int i=0; i<2; i++)
        for (int j=0; j<2; j++)
            cin >> B[i][j];

    cout << "Suma:\n";
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            R[i][j] = A[i][j] + B[i][j];
            cout << R[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
