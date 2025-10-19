#include <iostream>
#include <vector>
using namespace std;

class FenwickTree2D{
    vector<vector<int>> bit;
    int n,m;
public:
    FenwickTree2D(int _n,int _m){ n=_n; m=_m; bit.assign(n+1,vector<int>(m+1,0)); }
    void update(int x,int y,int val){
        for(int i=x;i<=n;i+=i&-i)
            for(int j=y;j<=m;j+=j&-j)
                bit[i][j]+=val;
    }
    int query(int x,int y){
        int sum=0;
        for(int i=x;i>0;i-=i&-i)
            for(int j=y;j>0;j-=j&-j)
                sum+=bit[i][j];
        return sum;
    }
};

int main(){
    FenwickTree2D ft(5,5);
    ft.update(1,1,5);
    ft.update(2,3,8);
    cout<<ft.query(2,3);
}
