#include<bits/stdc++.h>
using namespace std;
#define ll long long
string binaryNextNumber(string s){
    s.insert(s.begin(),'0');
    int n=s.size();
    int flag=0, carry=0;
    for(int i=n-1; i>=0; i--){
        if(flag==0){
            if(s[i]=='0'){
                s[i]='1';
                while(s[0]=='0')s.erase(s.begin());
                return s;
            }
        }       
            flag=1;
            if(s[i]=='1'){
                s[i]='0';
                carry=1;
            }else {
                s[i]='1';
                while(s[0]=='0')s.erase(s.begin());
                return s;
            }
        
    }
}
int main(){
    string s; cin>>s;
    cout<<binaryNextNumber(s)<<"\n";
}