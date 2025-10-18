#include <iostream>
using namespace std;

struct Nodo {
    int dato; Nodo* izq; Nodo* der;
    Nodo(int d): dato(d), izq(nullptr), der(nullptr) {}
};

Nodo* minValorNodo(Nodo* nodo){
    Nodo* actual=nodo;
    while(actual && actual->izq) actual=actual->izq;
    return actual;
}

Nodo* eliminar(Nodo* raiz,int key){
    if(!raiz) return raiz;
    if(key<raiz->dato) raiz->izq=eliminar(raiz->izq,key);
    else if(key>raiz->dato) raiz->der=eliminar(raiz->der,key);
    else{
        if(!raiz->izq){ Nodo* temp=raiz->der; delete raiz; return temp;}
        else if(!raiz->der){ Nodo* temp=raiz->izq; delete raiz; return temp;}
        Nodo* temp=minValorNodo(raiz->der);
        raiz->dato=temp->dato;
        raiz->der=eliminar(raiz->der,temp->dato);
    }
    return raiz;
}

void inorder(Nodo* raiz){
    if(raiz){ inorder(raiz->izq); cout<<raiz->dato<<" "; inorder(raiz->der);}
}

int main(){
    Nodo* root=new Nodo(50);
    root->izq=new Nodo(30); root->der=new Nodo(70);
    root->izq->izq=new Nodo(20); root->izq->der=new Nodo(40);
    root->der->izq=new Nodo(60); root->der->der=new Nodo(80);
    root=eliminar(root,50);
    inorder(root);
}
