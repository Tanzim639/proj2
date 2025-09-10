#include<bits/stdc++.h>
using namespace std;
#define ll long long

int CheapestFLight(int n, vector<vector<int>> &flights, int src, int dst, int K)
    {

        vector<pair<int, int>> adj[n];
        for (auto it : flights)
        {
            adj[it[0]].push_back({it[1], it[2]});
        }

        queue<pair<int, pair<int, int>>> q;
        // keeping in queue makes it sorted in stops numbers, like bfs
        
        q.push({0, {src, 0}});
        vector<int> dist(n, 1e9);
        dist[src] = 0;
        while (!q.empty())
        {
            auto it = q.front();
            q.pop();
            int cost = it.first;
            int node = it.second.first;
            int stops = it.second.second;
            if (stops > K)
                continue;
            for (auto iter : adj[node])
            {
                int adjNode = iter.first;
                int edW = iter.second;
                if (cost + edW < dist[adjNode] && stops <= K)
                {
                    dist[adjNode] = cost + edW;
                    q.push({cost + edW, {adjNode, stops+1}});
                }
            }
        }
        if (dist[dst] == 1e9)
            return -1;
        return dist[dst];
    }

int main(){

}