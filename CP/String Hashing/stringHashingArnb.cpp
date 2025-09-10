#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=2e5+7;
ll Base1[]={401,402,403,404,405,406,407,408,409};
ll Base2[]={411,412,413,414,415,416,417,418,419};
ll Mod1[]={1000001329,1345005517,1000002239,200002577,1000003397,1000003559,987001789,1000004207,1745005183};
ll Mod2[]={1445003887,1034558389,1134559717,1234555639,1334558999,1534556819,1634555621,1734557563,1834567627};
ll base1,base2,mod1,mod2;
ll power1[N],power2[N];
ll pref1[N],pref2[N];
void pow_cal()
{
    power1[0]=power2[0]=1;
    for (ll i=1;i<N;i++)
    {
        power1[i]=(power1[i-1]*base1)%mod1;
        power2[i]=(power2[i-1]*base2)%mod2;
    }
}
 
void s_hash(string &s)
{
    pref1[0]=0,pref2[0]=0;
    for (ll i=1;i<=s.length();i++)
    {
        ll x=s[i-1]+1;
        pref1[i]=((pref1[i-1]*base1)%mod1)+x;
        pref1[i]%=mod1;
 
        pref2[i]=((pref2[i-1]*base2)%mod2)+x;
        pref2[i]%=mod2;
    }
}
 
pair<ll,ll> get_hash(ll l,ll r) // 1 based indexing
{
    if (l>r) return {-1,-1};
 
    ll hash1=(pref1[r]-(pref1[l-1]*power1[r-l+1]))%mod1;
    hash1=(hash1+mod1)%mod1;
 
    ll hash2=(pref2[r]-(pref2[l-1]*power2[r-l+1]))%mod2;
    hash2=(hash2+mod2)%mod2;
 
    return {hash1,hash2};
}

///
pair<ll,ll> get_hash_s(string &s){
    ll hash1=0, hash2=0;
    ll n = s.size();
    for(ll i=0; i<n; i++){
        ll x = s[i]+1;
        // hash1=(hash1+((power1[i]*(s[i]+1))%mod1))%mod1;
        // hash2=(hash2+((power2[i]*(s[i]+1))%mod2))%mod2;
        hash1 = (((hash1 * base1)%mod1) + x) % mod1;
        hash2 = (((hash2 * base2)%mod2) + x) % mod2;
    }
    return {hash1,hash2};
}
///

 

 main(){
    srand(time(NULL));
    base1=Base1[rand()%9];
    base2=Base2[rand()%9];
    mod1=Mod1[rand()%9];
    mod2=Mod2[rand()%9];
    pow_cal();
    ////////
    string s = "aaaaa";
    s_hash(s);
    auto pr = get_hash(1,2);
    auto pr2 = get_hash(3,4);
    cout<<pr.first<<" "<<pr.second<<endl;
    cout<<pr2.first<<" "<<pr2.second<<endl;
}