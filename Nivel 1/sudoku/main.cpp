#include <iostream>
using namespace std;

bool esValido(int tab[4][4], int fila,int col,int num){
    for(int x=0;x<4;x++) if(tab[fila][x]==num || tab[x][col]==num) return false;
    return true;
}

bool resolver(int tab[4][4], int fila,int col){
    if(fila==4) return true;
    if(col==4) return resolver(tab,fila+1,0);
    if(tab[fila][col]!=0) return resolver(tab,fila,col+1);
    for(int num=1;num<=4;num++){
        if(esValido(tab,fila,col,num)){
            tab[fila][col]=num;
            if(resolver(tab,fila,col+1)) return true;
            tab[fila][col]=0;
        }
    }
    return false;
}

int main(){
    int tab[4][4]={{1,0,0,0},{0,0,0,2},{0,3,0,0},{0,0,4,0}};
    if(resolver(tab,0,0)){
        for(int i=0;i<4;i++){ for(int j=0;j<4;j++) cout<<tab[i][j]<<" "; cout<<endl;}
    }
}
