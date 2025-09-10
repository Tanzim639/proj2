#include <bits/stdc++.h>
using namespace std;
#define lli long long
#define nl <<"\n"
#define PI acos(-1.0)
#define pb push_back
#define vec2d(name,n,m,val) vector<vector<lli>>(name)((n),vector<lli>((m),(val)))
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mem(a,b) memset(a,b,sizeof(a))
#define UNIQUE(a) (a).erase(unique(all(a)),(a).end())
#define l_b lower_bound
#define u_b upper_bound
#define F first
#define S second
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define ok cout<<"ok" nl
#define Case(t) cout<<"Case "<<t<<":\n"
#define setpre(n) fixed<<setprecision(n)
#define input(x) for(auto &i:x) cin>>i
#define print(x) for(auto &i:x) cout<<i<<" "; cout nl

int main() {
    ios::sync_with_stdio(0); //cin.tie(0);
    int t, T=1; cin>>T;
    for(t=1; t<=T; t++) {
        lli n, mxpath=0;
        cin>>n;
        vector<pair<lli,lli>>vc;
        for(lli i=1; i<=n; i++) {
            cout<<"? "<<i<<" "<<n;
            for(lli j=1; j<=n; j++) {
                cout<<" "<<j;
            }
            cout nl;
            lli x;
            cin>>x;
            mxpath=max(mxpath,x);
            vc.pb({x,i});
        }
        sort(rall(vc));
        vector<lli>path;
        path.pb(vc[0].S);
        lli last=0;
        for(lli i=1; i<vc.size(); i++) {
            cout<<"? "<<vc[last].S<<" 2 "<<vc[last].S<<" "<<vc[i].S nl;
            lli x;
            cin>>x;
            if(x==2) {
                path.pb(vc[i].S);
                last=i;
            }
        }
        cout<<"! "<<mxpath;
        for(auto x:path) cout<<" "<<x;
        cout nl;
    }
    return 0;
}
