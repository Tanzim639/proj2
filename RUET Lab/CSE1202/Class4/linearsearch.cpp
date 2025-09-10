#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k; cin>>k;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            cout<<"Location is "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Not found"<<endl;
}