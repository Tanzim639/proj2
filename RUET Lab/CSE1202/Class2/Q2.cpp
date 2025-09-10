//2.3
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=10;
    int arr[N]={30,10,20,100,50,40,70,60,90,80};
    int K, LOC=0, MAX=arr[0];
    for(K=1; K<N; K++){
        if(MAX<arr[K]){
            MAX=arr[K];
            LOC=K;
        }
    }
    cout<<LOC<<" "<<MAX<<endl;
}