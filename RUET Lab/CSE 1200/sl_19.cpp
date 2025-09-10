#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ss;
    cin >> ss;
    int a=ss.length();
    int b=a;
    int cnt=0;
    for(int i=0;i<a/2;i++){
        b--;
        if(ss[i]!=ss[b])cnt++;        
    }
    if(cnt==1)cout << "YES" << endl;
    else if(cnt==0 && a%2!=0) cout << "YES" <<endl;
    else cout << "NO" <<endl;
}