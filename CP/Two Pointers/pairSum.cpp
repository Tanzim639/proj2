//find the two values in an array that sums up to x
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int lb=0, ub=n-1;
    int toFind; cin>>toFind;
    while(lb<ub){
        if(v[ub]+v[lb]==toFind){
            cout<<v[ub]<<" "<<v[lb]<<endl;
            return 0;
        }
        if(v[ub]+v[lb]>toFind){
            ub--;
        }else{
            lb++;
        }
    }
    cout<<"Not Found"<<endl;
}