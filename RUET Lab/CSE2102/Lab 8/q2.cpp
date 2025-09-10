#include<bits/stdc++.h>
using namespace std;
int main(){
    int key=3;
    string s; cin>>s;
    int n=s.size();
    string encrypts="", decrypts="";
    for(int i=0; i<n; i++){
        int prev = s[i]-'a';
        int curr=prev+key;
        curr=curr%26;
        encrypts.push_back(curr+'a');
    }
    cout<<encrypts<<endl;
    for(int i=0; i<n; i++){
        int prev = encrypts[i]-'a';
        int curr=prev-key;
        curr=(curr+26)%26;
        decrypts.push_back(curr+'a');
    }
    cout<<decrypts<<endl;
}