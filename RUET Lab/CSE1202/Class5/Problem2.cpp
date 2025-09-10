#include <bits/stdc++.h>
using namespace std;
//Amusing Joke
//https://codeforces.com/problemset/problem/141/A
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    multiset<char>ms,ms2;
    for(int i=0; i<a.size(); i++){
        ms.insert(a[i]);
    }
    for(int i=0; i<b.size(); i++){
        ms.insert(b[i]);
    }
    for(int i=0; i<c.size(); i++){
        ms2.insert(c[i]);
    }
    if(ms==ms2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 