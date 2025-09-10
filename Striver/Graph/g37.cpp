#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isv(pair<int,int>a, int n, int m){
    return (a.first>=0 && a.first<n && a.second>=0 && a.second<m);
}

int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
    int n = rows, m = columns;
    vector<vector<int>> dist(n, vector<int>(m,1e9));
    dist[0][0]=0;
    int delx[] = {-1, 0, 1, 0};
    int dely[] = {0, -1, 0, 1};
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    set<pair<int, pair<int,int>>> st;
    st.insert({0, {0,0}});
    while(st.size()){
        auto it  =*st.begin();
        st.erase(it);
        int dis = it.first;
        int x = it.second.first, y = it.second.second;
        for(int i=0; i<4; i++){
            int newx = x+delx[i];
            int newy = y+dely[i];
            if(!isv({newx,newy},n,m))continue;
            if(dist[newx][newy]>max(dist[x][y], abs(heights[x][y]-heights[newx][newy]))){
                st.erase({dist[newx][newy], {newx, newy}});
                dist[newx][newy] = max(dist[x][y], abs(heights[x][y]-heights[newx][newy]));
                st.insert({dist[newx][newy], {newx,newy}});
            }
        }
    }
    return dist[n-1][m-1];
}


int main(){

}