#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
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
#define vpch vector<pair<char, char>>
#define mll map<ll, ll>
#define mchll map<char, ll>
#define sll set<long long>
#define msll multiset<long long>
#define mem(a, b) memset(a, b, sizeof(a))
#define SIZE(arr) sizeof(arr) / sizeof(arr[0])
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
// #define pie 3.141592653589793238462643383279502884197 //acos(-1)
#define pie acos(-1)
#define printv(stl) for(auto itr: stl){cout<<itr<<" ";}cout<<"\n";
#define printvv(stl) for(auto itr: stl){for(auto it: itr){cout<<it<<" ";}cout<<"\n";}
#define printmp(stl) for(auto itr: stl){cout<<itr.first<<" "<<itr.second<<"\n";}



// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template<typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template<typename T>struct OrderedMultiset {
//     int id;
//     ordered_set<pair<T, int>> st;
//     OrderedMultiset() {id = 0;}
//     void insert(T val) {st.insert({val, id++});}
//     void erase(T val) {st.erase(st.lower_bound({val, 0}));} 
//     int order_of_key(T val) {return st.order_of_key({val, 0});}
//     T find_by_order(int val) { pair<T, int> p = *st.find_by_order(val); return p.first;}
//     typename ordered_set<pair<T,int>>::iterator lower_bound(T val) {return st.lower_bound({val, 0});}
//     typename ordered_set<pair<T, int>>::iterator upper_bound(T val) {return st.upper_bound({val, id});}
//     int size() {return st.size();}
//     void clear() { st = ordered_set<pair<T, int>>();}
// };
// // find_by_order, order_of_key



// vector<bool> isPrimeArr(1000009,false); // is compos
// void sieve(ll n) {
//     n++;
//     isPrimeArr[0] = true;
//     isPrimeArr[1] = true;
//     for(ll p=2; p*p<=n; p++) {
//         if(isPrimeArr[p]==false) {
//             for(ll i=p*p; i<=n; i+=p) if(!isPrimeArr[i]) isPrimeArr[i]=true;
//         }
//     }
// }


// a^-1 % m = a^(m-2) % m ;  a and m coprime, m prime; 
const ll M=1e9 + 7;
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


ll sum1ton(ll n){
    if(n%2){
        return n*((n+1)/2);
    } 
    return (n/2)*(n+1);
}
ll nc2(ll n){
    if(n<2)return 0;
    if(n%2){
        return n*((n-1)/2);
    } 
    return (n/2)*(n-1);
}
ll lcm(ll a, ll b){
    return (a*b)/__gcd(a,b);
} 
ll sumOfDigits(ll n){
    ll ans=0;
    while (n!=0){
        ans+=(n%10);
        n/=10;
    }
    return ans;
}
bool isPrime(ll n){
    if(n==1)return false;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0)return false;
    }
    return true;
}
bool isPowerOfTwo(ll x){
    return x && (!(x & (x - 1)));
}


// bool cmp(pll a, pll b){
//     return a.second<b.second;
// }



ll tccnt=0;
// string numbersToString(vector<ll>& numbers) {
//     string result;
//     for (ll i = 0; i < numbers.size(); ++i) {
//         result += to_string(numbers[i]);
//         if (i < numbers.size() - 1) { 
//             result += ",";
//         }
//     }
//     return result;
// }

const ll N=1000010;
const ll mod=998244353;
vvll prmfacts(N);
void sieve(){
    for(ll i=2; i<N; i++){
        if(prmfacts[i].empty())for(ll j=i; j<N; j+=i){
            prmfacts[j].pb(i);
        }
    }
}

void SOLVE() {
    ll n;
    cin>>n;
    vll v(n);
    loop(i,n)cin>>v[i];
    map<vll, ll> mp;
    map<vll, ll> valid;
    map<vll, ll> done;
    // map<ll, ll> mp;
    // map<ll, ll> valid;
    // map<ll, ll> done;
    sll st;
    st = {all(prmfacts[v[n-1]])};


    
    // printv(st);
    ll cnt=0;
    for(ll i=n-1; i>=0; i--){
        vll haha = prmfacts[v[i]];
        if(st.size()){
            bool ache=false;
            autol(haha){
                if(st.count(itr))ache=true;
            }
            if(!ache)continue;
        }
        cnt++;
        vll xd;
        autol(haha){
            // if(st.count(itr)){
                xd.pb(itr);
                st.insert(itr);
            // }
        }
        if(xd.empty())continue;;
        // out "xd  "; printv(xd);
        ll sz = xd.size();
        ll bitmask = (1LL<<(sz))-1LL;
        // out "bitmask  " oo bitmask nl;
        iloop(j,1,bitmask+1){
            vll tmp;
            loop(k,sz){
                if((j>>k)&1LL){
                    tmp.pb(xd[k]);
                }
            }
            sortv(tmp);
            if(tmp.empty())continue;;
            // out "tmp  "; printv(tmp);
            // if(mp[tmp]==0)mp[tmp]=1;
            // else mp[tmp]=(mp[tmp]*2)%mod;
            if(valid[tmp]==0)valid[tmp]++, mp[tmp]=1, done[tmp]++;
            else{
                if(done[tmp]==1)mp[tmp]=1, done[tmp]=0;
                else mp[tmp]=(mp[tmp]*2)%mod;
            }
            
        }
    }
    if(cnt<=1){
        out 0 nl;
        return;
    }
    // autol(mp){
    //     out  itr.second oo " <-- ";
    //     printv(itr.first);
    // }
    ll ans=0;
    autol(mp){
        if(itr.first.size()&1LL){
            ans=(ans+itr.second)%mod;
        }else{
            ans=(ans-itr.second+mod)%mod;
        }
    }
    out ans nl;
}


// string r = s1.substr(3, 2);
// s.find(sb)!=string::npos

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();
    ll TEST_CASE = 1;
    // cin >> TEST_CASE;
    while (TEST_CASE--){
        SOLVE();
    }
}