#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream archivo("numeros.txt");
    int n;
    cout << "Cuantos numeros desea guardar? ";
    cin >> n;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        archivo << num << endl;
    }
    archivo.close();

    ifstream lectura("numeros.txt");
    int num;
    cout << "Numeros guardados:\n";
    while(lectura >> num)
        cout << num << endl;
    lectura.close();

    return 0;
}
