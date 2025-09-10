#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for (ll i = 0; i < (n); i++)
#define iloop(i, init, n) for (ll i = (init); i < (n); i++)
#define autoll(stl, itr) for (auto itr : stl)
#define autol(stl ) for (auto itr : stl)
#define pb push_back
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vch vector<char>
#define vvch vector<vector<char>>
#define sortv(a) sort(a.begin(), a.end())
#define sortvr(a) sort(a.rbegin(), a.rend())
#define reversev(a) reverse(a.begin(), a.end())
#define sumv(a) accumulate(a.begin(),a.end(),0LL)
#define all(v) v.begin(), v.end()
#define pll pair<ll, ll>
#define vpll vector<pair<ll, ll>>
#define mll map<ll, ll>
#define sll set<ll>
#define msll multiset<ll>
#define YO cout<<"YO\n"
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
#define out cout <<
#define nl << "\n"
#define spc << " "
#define space << " " <<
#define oo <<
#define pie acos(-1)
#define printv(stl) for(auto itrr: stl){cout<<itrr<<" ";}cout<<"\n";
#define printvv(stl) for(auto itrr: stl){for(auto itrrr: itrr){cout<<itrrr<<" ";}cout<<"\n";}
#define printmp(stl) for(auto itrr: stl){cout<<itrr.first<<" "<<itrr.second<<"\n";}

#define mod 1000000007
vll fact(1001);

ll poww(ll a, ll b){
    ll ans=1;
    while(b>0){
        if(b&1LL){
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b>>=(1LL);
    }
    return ans%mod;
}

ll ncr(ll n, ll r){
    ll lob = fact[n];
    ll hor = fact[r];
    hor = (hor*fact[n-r])%mod;
    hor = poww(hor, mod-2) % mod;
    return (lob*hor)%mod;
}

void SOLVE() {
    
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


    fact[0]=1;
    iloop(i,1,1001)fact[i]=(fact[i-1]*i)%mod;

    
    ll TEST_CASE = 1;
    cin >> TEST_CASE;
    while (TEST_CASE--){
        SOLVE();
    }
}