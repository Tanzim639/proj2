#include <bits/stdc++.h>
using namespace std;


int main(){
    int  n=10;
    int data[n]={40,4,20,1,23,39,6,12,29,10};
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(data[i]>data[j])swap(data[i], data[j]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<data[i]<<" ";
    }
}