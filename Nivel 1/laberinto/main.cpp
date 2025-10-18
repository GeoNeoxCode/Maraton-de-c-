#include <iostream>
using namespace std;

bool resolver(int m[][4], int x,int y,int sol[][4]){
    if(x==3 && y==3){ sol[x][y]=1; return true;}
    if(x>=0 && y>=0 && x<4 && y<4 && m[x][y]==1){
        sol[x][y]=1;
        if(resolver(m,x+1,y,sol)) return true;
        if(resolver(m,x,y+1,sol)) return true;
        sol[x][y]=0;
        return false;
    }
    return false;
}

int main(){
    int m[4][4]={{1,0,0,0},{1,1,0,1},{0,1,0,0},{1,1,1,1}}, sol[4][4]={0};
    if(resolver(m,0,0,sol)) for(int i=0;i<4;i++){ for(int j=0;j<4;j++) cout<<sol[i][j]<<" "; cout<<endl;}
}
