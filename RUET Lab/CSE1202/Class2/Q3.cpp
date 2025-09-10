//2.4
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=5; 
    int arr[N]={10,40,20,50,30};
    int ITEM=50;
    int LOC=-1, K=0;
    for(K=0; K<N; K++){
        if(arr[K]==ITEM){
            LOC=K;
            break;
        }
    }
    if(LOC==-1)cout<<": ITEM is not in the array"<<endl;
    else cout<<LOC+1<<" is the location of ITEM "<<ITEM<<endl;
}