#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9; // Assuming infinity as a large number
void zeroOneBFS(vector<vector<pair<int, int>>>& graph, int start) {
    int n = graph.size(); // Number of nodes
    vector<int> dist(n, INF); 
    deque<int> q;
    dist[start] = 0;
    q.push_front(start);
    while (!q.empty()) {
        int currentNode = q.front();
        q.pop_front();
        for (auto& neighbor : graph[currentNode]) {
            int nextNode = neighbor.first;
            int weight = neighbor.second;
            if (dist[nextNode] > dist[currentNode] + weight) {
                dist[nextNode] = dist[currentNode] + weight;
                if (weight == 0) q.push_front(nextNode);
                else q.push_back(nextNode);
            }
        }
    }
    // Print the shortest distances from the start node
    cout << "Shortest distances from node " << start << " using 0-1 BFS:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Node " << i << ": ";
        if (dist[i] == INF) cout << "INF\n";
        else cout << dist[i] << endl;
    }
}
int main() {
    vector<vector<pair<int, int>>> graph = {
        {{1, 0}, {2, 1}}, // Node 0
        {{3, 0}, {4, 1}}, // Node 1
        {{4, 0}},         // Node 2
        {{5, 1}},         // Node 3
        {{5, 0}},         // Node 4
        {}                // Node 5
    };
    int startNode = 0; // Starting node for BFS
    zeroOneBFS(graph, startNode);
}
