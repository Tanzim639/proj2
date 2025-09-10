#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    set<long long>s;
    for(int i=0; i<n; i++){
        int tmp; cin>>tmp;
        s.insert(tmp);
    }
    cout<<s.size()<<endl;
}

