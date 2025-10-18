#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n=5;
    vector<vector<int>> grafo = {
        {1,2}, {0,3,4}, {0,4}, {1}, {1,2}
    };
    vector<bool> visitado(n,false);
    queue<int> q;
    q.push(0); visitado[0]=true;
    while(!q.empty()){
        int nodo=q.front(); q.pop();
        cout<<nodo<<" ";
        for(int v: grafo[nodo])
            if(!visitado[v]){ visitado[v]=true; q.push(v); }
    }
    return 0;
}
