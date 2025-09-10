// next permutation in lexiographical order
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> nextPermutation(int n, vector<int>&arr){
    int ind=-1;
    for(int i=n-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            ind=i;
            break;
        }
    }
    if(ind!=-1){
        for(int i=n-1; i>ind; i--){
            if(arr[i]>arr[ind]){
                swap(arr[i],arr[ind]);
                break;
            }
        }
        reverse(arr.begin()+ind+1,arr.end());
    }else{
        reverse(arr.begin(),arr.end());
    }
    return arr;
}
int main(){
    int n=6;
    vector<int>v(n),res;
    v={1,2,3,6,5,4};
    res=nextPermutation(n,v);
    for(auto it: res)cout<<it<<" "; cout<<"\n";
}