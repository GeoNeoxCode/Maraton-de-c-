#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int n; cout<<"Cuantos lanzamientos? "; cin>>n;
    for(int i=0;i<n;i++) cout<<"Lanzamiento "<<i+1<<": "<<rand()%6+1<<endl;
}
