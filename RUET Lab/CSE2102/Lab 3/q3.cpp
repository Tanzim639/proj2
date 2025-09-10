//q3
#include<bits/stdc++.h>
using namespace std;
int main(){
    string v="xyz";
    int vsz=v.size();
    int sz=1<<v.size();
    for(int i=0; i<sz; i++){
        string subs="";
        for(int j=0; j<vsz; j++){
            int num=i>>j;
            if(num&1)subs.push_back(v[j]);
        }
        cout<<subs<<endl;
    }
}