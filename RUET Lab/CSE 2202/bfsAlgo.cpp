#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> bfs(ll n, ll m, vector<pair<ll, ll>> edges, ll s) {
    vector<vector<ll>> graph(n + 1);
    for (const auto& edge : edges) {
        ll u = edge.first, v = edge.second;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<ll> distances(n + 1, -1);
    queue<ll> q;
    distances[s] = 0;
    q.push(s);
    while (!q.empty()) {
        ll current = q.front();
        q.pop();
        for (ll neighbor : graph[current]) {
            if (distances[neighbor] == -1) { 
                distances[neighbor] = distances[current] + 6;
                q.push(neighbor);
            }
        }
    }
    vector<ll> result;
    for (ll i = 1; i <= n; ++i) {
        if (i != s) {
            result.push_back(distances[i]);
        }
    }
    return result;
}

signed main() {
    ll q; 
    cin >> q; 
    while (q--) {
        ll n, m;
        cin >> n >> m; 
        vector<pair<ll, ll>> edges(m);
        for (ll i = 0; i < m; ++i) {
            cin >> edges[i].first >> edges[i].second;
        }
        ll s;
        cin >> s; 
        vector<ll> result = bfs(n, m, edges, s);
        for (ll distance : result) {
            cout << distance << " ";
        }
        cout << endl;
    }
}
