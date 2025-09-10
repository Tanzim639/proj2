#include "bits/stdc++.h"
using namespace std;
#define ll long long 
#define int long long 

vector<int>primes,v[1000001],a(1000001);
bool mark[1000001];
int cnt[1000001],n,dist1,dist2,dist3;

void factorize(int n1){
     int sz=primes.size();
    for(int i=2;i<=n1;i++){
        int x=i; 
        for(int j=0;j<sz&&(ll)primes[j]*(ll)primes[j]<=x;j++){
            if(x%primes[j]==0) v[i].push_back(primes[j]);
            while(x%primes[j]==0) x/=primes[j];
        }
        if(x>1) v[i].push_back(x);
    }
}

void sieve(int n1)
{
    for(int i=3; (ll)i*(ll)i<=n1; i+=2)
        if(!mark[i])
            for(int j=(ll)i*(ll)i; j<=n1; j+=i+i)
                mark[j]=1;
    primes.push_back(2LL);
    for(int i=3; i<n1; i+=2)
        if(!mark[i]) primes.push_back(i);
}

void add(int i){
    for(int j: v[a[i]]){
         cnt[j]++;
         if(cnt[j]==3) dist3++,dist2--;
         if(cnt[j]==2) dist2++, dist1--;
         if(cnt[j]==1) dist1++;
    }
}

void remove(int i){
    for(int j:v[a[i]]){
        cnt[j]--;
        if(cnt[j]==2) dist2++,dist3--;
        if(cnt[j]==1) dist1++,dist2--;
        if(cnt[j]==0) dist1--;
    }
}

bool check(int j, int i){
    if(dist3||dist2) return true;
    
    return false;
}

signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0);
    cin>>n;
    sieve(1000000);
    factorize(1000000);
    for(int i=0; i<n; i++)
        cin>>a[i];
    int j=0, ans=2;
    for(int i=0; i<n; i++)
    {
        add(i);
        while(j<i&&check(j,i)) {
            remove(j);
            j++;
        }
        
        ans=max(ans, i-j+1);
    } 
if(n<=2) ans=n;
    cout<<ans<<'\n';
    return 0;
}