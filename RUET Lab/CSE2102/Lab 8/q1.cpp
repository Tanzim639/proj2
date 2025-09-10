#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5, m=5, a=2, c=3, x=4;
    int arr[n+1];
    arr[0]=x;
    for(int i=1; i<=n; i++) arr[i]=((a*arr[i-1])+c)%m;
    for(int i=1; i<=n; i++) cout<<arr[i]<<" "; cout<<"\n";
}