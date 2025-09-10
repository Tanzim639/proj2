// Diameter of tree
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<vector<int>> adj(N, vector<int>());
vector<bool> visited(N, false);
vector<int> depth(N, 0);
void Dia_DFS(int root) {
	visited[root] = true;
	for (auto child : adj[root]) {
		if (!visited[child]) {
			depth[child] = depth[root] + 1;
			Dia_DFS(child);
		}
	}
}
int main() {
	int n, src, dest;
	cin >> n;
	int max_d = -1;
	int max_node;
	for (int i = 0; i < n - 1 ; i++) {
		cin >> src >> dest;
		adj[src].push_back(dest);
		adj[dest].push_back(src);
	}
	Dia_DFS(1);
	for (int i = 1; i <= n ; i++) {
		if (depth[i] > max_d) {
			max_d = depth[i];
			max_node = i;
		}
	}
	for (int i = 0; i < n; i++) {visited[i] = 0; depth[i]=0;}
	Dia_DFS(max_node);
	for (int i = 1; i <= n ; i++) {
		if (depth[i] > max_d) {
			max_d = depth[i];
		}
	}
	cout << max_d;
}

