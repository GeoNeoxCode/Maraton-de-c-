#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> pila;
    pila.push("A");
    pila.push("B");
    pila.push("C");

    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
}
