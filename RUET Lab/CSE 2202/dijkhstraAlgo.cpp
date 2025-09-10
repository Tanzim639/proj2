#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> shortestReach(ll n, vector<vector<ll>>& edges, ll s) {
    unordered_map<ll, vector<pair<ll, ll>>> graph;
    for (auto& edge : edges) {
        ll u = edge[0], v = edge[1], w = edge[2];
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    multiset<pair<ll,ll>> st;
    vector<ll> distances(n + 1, 1e15);
    distances[s] = 0; 
    st.insert({0, s});
    while (st.size()) {
        auto it = *st.begin();
        ll dist = it.first;
        ll u = it.second;
        st.erase(st.begin());
        if (dist > distances[u]) continue;
        for (const auto& neighbor : graph[u]) {
            ll v = neighbor.first;
            ll weight = neighbor.second;
            if (distances[u] + weight < distances[v]) {
                distances[v] = distances[u] + weight;
                st.insert({distances[v], v}); 
            }
        }
    }
    vector<ll> result;
    for (ll i = 1; i <= n; ++i) {
        if (i == s) continue;
        result.push_back(distances[i] == 1e15 ? -1 : distances[i]);
    }
    return result;
}

signed main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> edges(m, vector<ll>(3));
        for (ll i = 0; i < m; ++i) {
            cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
        }
        ll s;
        cin >> s;
        vector<ll> result = shortestReach(n, edges, s);
        for (ll i = 0; i < result.size(); ++i) {
            if (i > 0) cout << " ";
            cout << result[i];
        }
        cout << endl;
    }
}
