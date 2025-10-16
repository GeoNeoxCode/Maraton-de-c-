#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese número decimal: ";
    cin >> n;

    string bin="";
    while(n>0){
        bin = char((n%2)+'0') + bin;
        n/=2;
    }

    cout << "Binario: " << (bin.empty()?"0":bin) << endl;
    return 0;
}
