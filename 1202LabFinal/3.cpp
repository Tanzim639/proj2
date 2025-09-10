#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Number Of Elements: ";
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    int m=n/2;
    for(int i=0; i<m; i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;
}