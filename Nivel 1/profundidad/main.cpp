#include <iostream>
#include <vector>
using namespace std;

void dfs(int nodo, vector<vector<int>>&g, vector<bool>&vis){
    vis[nodo]=true;
    cout<<nodo<<" ";
    for(int v:g[nodo]) if(!vis[v]) dfs(v,g,vis);
}

int main(){
    int n=5;
    vector<vector<int>> g={{1,2},{0,3,4},{0,4},{1},{1,2}};
    vector<bool> vis(n,false);
    dfs(0,g,vis);
    return 0;
}
