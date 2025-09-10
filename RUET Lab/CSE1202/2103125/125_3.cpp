//Cipher Shifer
// https://codeforces.com/problemset/problem/1840/A
#include <iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        char fc=s[0];
        for(int i=1; i<n; i++){
        if(s[i]==fc){
            cout<<fc;
            fc=s[i+1]; i++;
        }
        }
        cout<<endl;
    }
}