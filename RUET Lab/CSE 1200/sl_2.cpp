#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int>v(3), ov;
    for(int i=0; i<3; i++){
        cin>>v[i]; ov.push_back(v[i]);
    }
    sort(v.begin(), v.end());
    for(int i: v){
        cout<<i<<endl;
    }cout<<endl;
    for(int i: ov){
        cout<<i<<endl;
    }
}