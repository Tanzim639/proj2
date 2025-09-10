#include <bits/stdc++.h>
using namespace std;
class DisjointSet {
    vector<vector<pair<int,int>>> rank, parent, size;
public:
    DisjointSet(int n, int m) {
        parent.resize(n );
        size.resize(n );
        for(int i=0; i<n; i++){
            parent[i].resize(m);
            size[i].resize(m);
        }
        for (int i = 0; i < n; i++) {
            for(int j=0; j<m; j++){
                parent[i][j] = {i,j};
                size[i][j] = {1,1};
            }
        }
    }

    pair<int,int> findUPar(pair<int,int> node) {
        if (node.first==parent[node.first][node.second].first && node.second==parent[node.first][node.second].second)
            return node;
        return parent[node.first][node.second] = findUPar(parent[node.first][node.second]);
    }

    void unionBySize(pair<int,int> u, pair<int,int> v) {
        pair<int,int> ulp_u = findUPar(u);
        pair<int,int> ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u.first][ulp_u.second].first < size[ulp_v.first][ulp_v.second].first) {
            parent[ulp_u.first][ulp_u.second] = ulp_v;
            size[ulp_v.first][ulp_v.second].first += size[ulp_u.first][ulp_u.second].first;
        }
        else {
            parent[ulp_v.first][ulp_v.second] = ulp_u;
            size[ulp_u.first][ulp_u.second].first += size[ulp_v.first][ulp_v.second].first;
        }
    }
};


vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
    DisjointSet obj(n,m);
    int delx[] = {1,0,-1,0};
    int dely[] = {0,1,0,-1};
    vector<vector<int>> haha(n, vector<int>(m,0));
    vector<int>ans={0};
    for(auto it: operators){
        int cnt=ans.back()+1;
        set<pair<int,int>> st;
        if(haha[it[0]][it[1]]){
            // cout<<"elihf"<<endl;
            ans.push_back(ans.back());
            continue;
        }
        haha[it[0]][it[1]]=1;
        for(int i=0; i<4; i++){
            int newx = it[0]+delx[i];
            int newy = it[1]+dely[i];
            if(newx<0 || newx>=n || newy<0 || newy>=m)continue;
                // cout<<newx<<"  "<<newy<<endl;
            if(haha[newx][newy]){
                st.insert(obj.findUPar({newx,newy}));
                obj.unionBySize({newx,newy}, {it[0],it[1]});
            }
            // for(auto it: st)cout<<it.first<<" "<<it.second<<", ";cout<<endl;
        }
        cnt-=st.size();
        ans.push_back(cnt);
    }
    ans.erase(ans.begin());
    return ans;
}

int main() {
    vector<vector<int>> operators ={
        {1,1}, {0,1}, {3,3}, {3,4}
    };
    vector<int>ans = numOfIslands(4,5,operators);
    for(auto it: ans)cout<<it<<endl;
}