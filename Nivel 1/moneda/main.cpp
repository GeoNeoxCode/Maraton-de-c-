#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int n; cout<<"Cuantos lanzamientos? "; cin>>n;
    for(int i=0;i<n;i++) cout<<(rand()%2==0?"Cara\n":"Cruz\n");
}
