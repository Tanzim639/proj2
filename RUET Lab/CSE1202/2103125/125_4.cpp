// Beautiful Matrix
// https://codeforces.com/contest/263/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[6][6]={0};
    int a,b;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
        cin>>arr[i][j];
        if(arr[i][j]==1){
            a=i; b=j;
        }
        }
    }
    cout<<abs(a-3)+abs(b-3)<<endl;
}