#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

// 4 sections in dfs to write code
// every section has a definition
void dfs(int vertex)
{
    /* Take action on vertex after entering the vertex */
    // if(vis[vertex]) return; //this can be written if inside for we havent written vis child condn
    cout << vertex << "\n";
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        cout << "parent" << vertex << " ,child" << child << "\n";
        if (vis[child]) 
            continue;
        /* Take action on child before entering the child node */
        dfs(child);
        /* Take action on child after existing the child node */
    }
    /* Take action on child before existing the vertex */
}

int main()
{

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
    return 0;
}