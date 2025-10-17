#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    bool esPalindromo = true;
    for(int i = 0; i < palabra.size() / 2; i++)
        if(tolower(palabra[i]) != tolower(palabra[palabra.size() - 1 - i]))
            esPalindromo = false;

    if(esPalindromo)
        cout << "Es un palindromo.";
    else
        cout << "No es un palindromo.";
    return 0;
}
