#include<bits/stdc++.h>
using namespace std;
#define ll long long

// https://www.geeksforgeeks.org/problems/prerequisite-tasks/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prerequisite-tasks
bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites){
    int V=N;
    vector<int>adj[V];
    for(int i=0; i<P; i++)adj[prerequisites[i].second].push_back(prerequisites[i].first);
    vector<int>indegree(V,0);
    for(int i=0; i<V; i++)for(auto it: adj[i])indegree[it]++;
    vector<int>ans;
    queue<int>q;
    for(int i=0; i<V; i++)if(indegree[i]==0)q.push(i);
    while(q.size()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0)q.push(it);
        }
    }
    return (ans.size()==V);
}


//https://www.geeksforgeeks.org/problems/course-schedule/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=course-schedule
vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) {
    int V=n;
    vector<int>adj[V];
    for(int i=0; i<m; i++)adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
    vector<int>indegree(V,0);
    for(int i=0; i<V; i++)for(auto it: adj[i])indegree[it]++;
    vector<int>ans;
    queue<int>q;
    for(int i=0; i<V; i++)if(indegree[i]==0)q.push(i);
    while(q.size()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0)q.push(it);
        }
    }
    if(ans.size()==n)return ans;
    else return {};
}

int main(){

}