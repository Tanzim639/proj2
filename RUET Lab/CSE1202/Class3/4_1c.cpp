#include <bits/stdc++.h>
using namespace std;
//traverse an array and make an array of prefix sum
int main(){
    int n=5;
    int arr[n]={10,20,30,40,50};
    int arr2[n];
    arr2[0]=arr[0];
    for(int i=1; i<n; i++){
        arr2[i]=arr[i]+arr2[i-1];
    }
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
}