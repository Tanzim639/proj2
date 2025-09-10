// lowest moves for a knight to go from one box to another 
//shortest path by bfs
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>>vis(8,vector<int>(8));
vector<vector<int>>level(8,vector<int>(8));
int getX(string s){
    return s[0]-'a';
}
int getY(string s){
    return s[1]-'1';
}
bool isValid(int x, int y){
    return x>=0 && y>=0 && x<8 && y<8;
}
vector<pair<int,int>> moves = {
    {1,2}, {-1,-2},
    {1,-2}, {-1,2},
    {2,1}, {-2,-1},
    {2,-1}, {-2,1}
};
int bfs(string source, string dest){
    int sourceX = getX(source);
    int sourceY = getY(source);
    int destX = getX(dest);
    int destY = getY(dest);
    queue<pair<int,int>>q;
    q.push({sourceX,sourceY});
    vis[sourceX][sourceY]=1;
    while(!q.empty()){
        pair<int,int>v = q.front();
        q.pop();
        int x=v.first, y=v.second;
        for(auto move: moves){
            int cx=move.first+x, cy=move.second+y;
            if(!isValid(cx,cy))continue;
            if(!vis[cx][cy]){
                q.push({cx,cy});
                level[cx][cy]=level[x][y]+1;
                vis[cx][cy]=1;
            }
        }
    }
    return level[destX][destY];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vis.assign(8,vector<int>(8));
        level.assign(8,vector<int>(8));
        string s1,s2;
        cin>>s1>>s2;
        cout<<bfs(s1,s2)<<endl;
    }
}