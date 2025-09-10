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
    ll n,l;
    cin>>n>>l;
    vll v(n);
    loop(i,n)cin>>v[i];
    msll pst, nst;
    ll z=0;
    loop(i,n){
        if(v[i]>0)pst.insert(v[i]);
        else if(v[i]<0)nst.insert(-v[i]);
        else z++;
    }
    ll sum = sumv(v);
    if(sum>l-1 || sum<-l){
        out "N" nl;
        return;
    }
    ll curr=0;
    vll ans;
    while(1){
        if(pst.empty() && nst.empty())break;
        if(pst.empty()){
            autol(nst){
                ans.pb(-itr);
            }
            break;
        }
        if(nst.empty()){
            autol(pst){
                ans.pb(itr);
            }
            break;
        }

        if(curr>=0){
            auto it = nst.end();
            it--;
            ans.pb(-(*it));
            curr-=(*it);
            nst.erase(it);
        }else{
            auto it = pst.end();
            it--;
            ans.pb(*it);
            curr+=(*it);
            pst.erase(it);
        }
    }

    ll hmm = 0;
    autol(ans){
        hmm+=itr;
        if(hmm>l-1 || hmm<-l){
            out "N" nl;
            return;
        }
    }

    out "S" nl;
    printv(ans);
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll TEST_CASE = 1;
    // cin >> TEST_CASE;
    while (TEST_CASE--){
        SOLVE();
    }
}