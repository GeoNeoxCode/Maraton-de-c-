#include <iostream>
using namespace std;

void quicksort(int a[], int ini, int fin){
    int i=ini, j=fin, piv=a[(ini+fin)/2];
    while(i<=j){
        while(a[i]<piv) i++;
        while(a[j]>piv) j--;
        if(i<=j) swap(a[i++],a[j--]);
    }
    if(ini<j) quicksort(a,ini,j);
    if(i<fin) quicksort(a,i,fin);
}

int main(){
    int arr[]={9,5,3,7,1,4};
    int n=6;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
