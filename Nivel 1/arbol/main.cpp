#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* izq;
    Nodo* der;
    int altura;
    Nodo(int d): dato(d), izq(nullptr), der(nullptr), altura(1) {}
};

int altura(Nodo* n){ return n? n->altura:0; }
int max(int a,int b){ return (a>b)?a:b; }

Nodo* rotacionDerecha(Nodo* y){
    Nodo* x=y->izq; Nodo* T2=x->der;
    x->der=y; y->izq=T2;
    y->altura=max(altura(y->izq),altura(y->der))+1;
    x->altura=max(altura(x->izq),altura(x->der))+1;
    return x;
}

Nodo* rotacionIzquierda(Nodo* x){
    Nodo* y=x->der; Nodo* T2=y->izq;
    y->izq=x; x->der=T2;
    x->altura=max(altura(x->izq),altura(x->der))+1;
    y->altura=max(altura(y->izq),altura(y->der))+1;
    return y;
}

int getBalance(Nodo* n){ return n? altura(n->izq)-altura(n->der):0; }

Nodo* insertar(Nodo* nodo,int d){
    if(!nodo) return new Nodo(d);
    if(d<nodo->dato) nodo->izq=insertar(nodo->izq,d);
    else if(d>nodo->dato) nodo->der=insertar(nodo->der,d);
    else return nodo;

    nodo->altura=1+max(altura(nodo->izq),altura(nodo->der));
    int balance=getBalance(nodo);

    if(balance>1 && d<nodo->izq->dato) return rotacionDerecha(nodo);
    if(balance<-1 && d>nodo->der->dato) return rotacionIzquierda(nodo);
    if(balance>1 && d>nodo->izq->dato){ nodo->izq=rotacionIzquierda(nodo->izq); return rotacionDerecha(nodo);}
    if(balance<-1 && d<nodo->der->dato){ nodo->der=rotacionDerecha(nodo->der); return rotacionIzquierda(nodo);}
    return nodo;
}

void inorder(Nodo* root){
    if(root){ inorder(root->izq); cout<<root->dato<<" "; inorder(root->der);}
}

int main(){
    Nodo* root=nullptr;
    root=insertar(root,10);
    root=insertar(root,20);
    root=insertar(root,30);
    root=insertar(root,40);
    root=insertar(root,50);
    inorder(root);
}
