#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct gcdst{
    int x,y,gcd;
};

gcdst eut(ll a, ll b){
    if(b==0){
        gcdst ans;
        ans.x = 1;
        ans.gcd = a;
        ans.y = 0;
        return ans;
    }
    gcdst ager = eut(b, a%b);
    gcdst ans;
    ans.gcd = ager.gcd;
    ans.x = ager.y;
    ans.y = ager.x - (a/b)*ager.y;
    return ans;
}

int main(){
    ll a,b;
    cin>>a>>b;
    gcdst ans = eut(a,b);
    cout<<ans.gcd<<"  "<<ans.x<<"  "<<ans.y<<endl;
}