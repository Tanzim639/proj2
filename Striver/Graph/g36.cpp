#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isv(pair<int,int>a, int n, int m){
    return (a.first>=0 && a.first<n && a.second>=0 && a.second<m);
}

int shortestPath(vector<vector<int>> &grid, pair<int, int> source, pair<int, int> destination) {
    if (source==destination) return 0;
    int delx[] = {-1, 0, 1, 0};
    int dely[] = {0, -1, 0, 1};
    int n = grid.size(), m = grid[0].size();
    vector<vector<int>> level(n, vector<int>(m,0));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    queue<pair<int,int>> q;
    q.push(source);
    // vis[source.first][source.second]=true;
    while(q.size()){
        auto it = q.front();
        q.pop();
        if(vis[it.first][it.second])continue;
        vis[it.first][it.second]=true; // ekhane dile tle day
        for(int i=0; i<4; i++){
            pair<int,int> newpr = {it.first+delx[i], it.second+dely[i]};
            if(!isv(newpr, n, m))continue;
            // if(vis[newpr.first][newpr.second])continue;
            if(grid[newpr.first][newpr.second]==0)continue;
            level[newpr.first][newpr.second] = level[it.first][it.second]+1;
            if(newpr==destination)return level[newpr.first][newpr.second];
            // vis[newpr.first][newpr.second]=true; // ekhane dile tle dayna
            q.push(newpr);
        }
    }
    return -1;
}

int main(){

}