//  https://www.codechef.com/problems/LOLBSGNJ6PK8
// factorial prime factorization

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for (ll i = 0; i < (n); i++)
#define iloop(i, init, n) for (ll i = (init); i < (n); i++)
#define autoll(stl, itr) for (auto itr : stl)
#define autol(stl ) for (auto itr : stl)
#define pb push_back
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vch vector<char>
#define vvch vector<vector<char>>
#define sortv(a) sort(a.begin(), a.end())
#define sortvr(a) sort(a.rbegin(), a.rend())
#define reversev(a) reverse(a.begin(), a.end())
#define sumv(a) accumulate(a.begin(),a.end(),0LL)
#define all(v) v.begin(), v.end()
#define pll pair<long long, long long>
#define vpll vector<pair<long long, long long>>
#define mll map<ll, ll>
#define sll set<long long>
#define msll multiset<long long>
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


ll n,m;
vll v;
const ll N=(1e7)+3;
const ll M=(1e9)+7;
// a^-1 % m = a^(m-2) % m ;  a and m coprime, m prime; 
ll poww(ll a, ll b){
    ll ans=1;
    while(b>0){
        if(b&1LL){
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=(1LL);
    }
    return ans%M;
}
vll primes;
vll spfArr(N,-1);
void spf(){
    for(ll i=2; i*i<=N; i++){
        if(spfArr[i]==-1){ // its prime
            for(ll j=i*i; j<=N; j+=i){
                spfArr[j]=i;
            }
        }
    }
    for(ll i=2; i<=N; i++){
        if(spfArr[i]==-1){
            primes.pb(i);
        }
    }
}

vll mfactprmfacts(N,0);
ll mFactDivCnt=1;
void func(){
    for(ll i=0; i<primes.size(); i++){
        ll cnt=0;
        for(ll j=primes[i]; ;j*=primes[i]){
            ll curr=m/j;
            if(curr==0)break;
            cnt+=curr;
        }
        mfactprmfacts[primes[i]]=cnt;
    }
    for(ll i=0; i<primes.size(); i++){
        if(mfactprmfacts[primes[i]]!=0){
            mFactDivCnt=(mFactDivCnt*((1+mfactprmfacts[primes[i]])%M))%M;
        }
    }
}

void SOLVE() {
    cin>>n>>m;
    loop(i,n){
        ll x; 
        cin>>x;
        v.pb(x);
    }
    spf();
    func();
    loop(i,n){
        mll mp;
        ll num=v[i];
        while(num>1){
            if(spfArr[num]==-1){
                mp[num]++;
                break;
            }
            mp[spfArr[num]]++;
            num/=spfArr[num];
        }
        ll ans=mFactDivCnt;
        autol(mp){
            ll inv = poww(mfactprmfacts[itr.first]+1, M-2)%M;
            ans=(ans*inv)%M;
            ans=( ans * ((((mfactprmfacts[itr.first]+itr.second)%M)+1)%M) )%M;
        }
        out ans spc;
    }
    cout nl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll TEST_CASE = 1;
    // cin >> TEST_CASE;
    while (TEST_CASE--){
        SOLVE();
    }
}