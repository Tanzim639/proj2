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
#define sortv(a) sort(a.begin(), a.end())
#define sortvr(a) sort(a.rbegin(), a.rend())
#define reversev(a) reverse(a.begin(), a.end())
#define sumv(a) accumulate(a.begin(),a.end(),0LL)
#define pll pair<long long, long long>
#define vpll vector<pair<long long, long long>>
#define mll map<ll, ll>
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
#define pie 3.141592653589793238462643383279502884197 //acos(-1)
#define printv(stl) for(auto itr: stl){cout<<itr<<" ";}cout<<"\n";
#define printvv(stl) for(auto itr: stl){for(auto it: itr){cout<<it<<" ";}cout<<"\n";}


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T>struct OrderedMultiset {
    int id;
    ordered_set<pair<T, int>> st;
    OrderedMultiset() {id = 0;}
    void insert(T val) {st.insert({val, id++});}
    void erase(T val) {st.erase(st.lower_bound({val, 0}));} 
    int order_of_key(T val) {return st.order_of_key({val, 0});}
    T find_by_order(int val) { pair<T, int> p = *st.find_by_order(val); return p.first;}
    typename ordered_set<pair<T,int>>::iterator lower_bound(T val) {return st.lower_bound({val, 0});}
    typename ordered_set<pair<T, int>>::iterator upper_bound(T val) {return st.upper_bound({val, id});}
    int size() {return st.size();}
    void clear() { st = ordered_set<pair<T, int>>();}
};
// find_by_order, order_of_key



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


//// a^-1 % m = a^(m-1) % m ;  a and m coprime, m prime; 
const ll M=1e9 + 7;
ll poww(ll a, ll b){
    ll ans=1;
    while(b>0){
        if(b&1LL){
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
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

//// A^(-1) % m = A^(m-2) % m ; A and m is coprime, m is prime;
// const ll mod = 1e9 +7;
// ll factorial(ll n){
//     if(n==0)return 1LL;
//     ll ans=1;
//     iloop(i,1,n+1){
//         ans=(ans*i)%mod;
//     }
//     return ans%mod;
// }



void SOLVE() {
    ordered_set <ll>st;
    vll v = {10,2,11,3,5,15,2};
    vll newv;
    loop(i,7){
        st.insert(i);
    }
    while(st.size()){
        ll sz = st.size();
        ll rndm = rand()%sz;
        ll del = *st.find_by_order(rndm);
        st.erase(del);
        newv.pb(v[del]);
    }
    printv(newv);
}


// string r = s1.substr(3, 2);
// s.find(sb)!=string::npos

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

signed main()
{
    srand(time(0));
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // sieve(1000001);
    ll TEST_CASE = 1;
    // cin >> TEST_CASE;
    while (TEST_CASE--){
        SOLVE();
    }
}