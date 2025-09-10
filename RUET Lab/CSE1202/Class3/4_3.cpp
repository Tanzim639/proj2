#include <bits/stdc++.h>
using namespace std;


int main(){
    int n=10; 
    int arr[n]={4,2,66,8,3,56,98,12,33,100};
    int k=5;
    k--;
    int j=k;
    while(j<=n-2){
        arr[j]=arr[j+1];
        j++;
    }
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }
}