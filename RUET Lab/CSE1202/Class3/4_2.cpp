#include <bits/stdc++.h>
using namespace std;


int main(){
    int n=10;
    int arr[n+1]={4,2,6,12,9,67,1,34,88};
    int item=100;
    int k=4;
    k--;
    int j=n;
    while(j>=k){
        arr[j]=arr[j-1];
        j--;
    }
    arr[k]=item;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}