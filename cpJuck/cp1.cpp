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

void SOLVE() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string ss = s;
    sortv(ss);
    ll cnt0=0, cnt1=0;
    loop(i,n){
        if(s[i]=='0' && ss[i]=='1')cnt0++;
        else if(s[i]=='1' && ss[i]=='0')cnt1++;
    }
    ll cnt=(cnt0+cnt1);
    out (cnt+1)/2 nl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll TEST_CASE = 1;
    cin >> TEST_CASE;
    while (TEST_CASE--){
        SOLVE();
    }
}