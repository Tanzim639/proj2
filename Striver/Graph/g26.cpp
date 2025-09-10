#include<bits/stdc++.h>
using namespace std;
#define ll long long

// https://www.geeksforgeeks.org/problems/alien-dictionary/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=alien-dictionary

void func(string a, string b, vector<int>adj[]){
    int n = min(a.size(), b.size());
    int j=-1;
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            j=i;
            break;
        }
    }
    if(j!=-1)adj[a[j]-'a'].push_back(b[j]-'a');
    // cout<<j<<endl;
}

string findOrder(string dict[], int n, int k) {
    vector<int>adj[k];
    for(int i=1; i<n; i++){
        func(dict[i-1],dict[i],adj);
    }
    // for(int i=0; i<k; i++){
    //     for(auto it: adj[i]){
    //         cout<<it<<"  ";
    //     }
    //     cout<<endl;
    // }
    int V=k;
    vector<int>ans;
    vector<int>indegree(V,0);
    for(int i=0; i<V; i++){
        for(auto it: adj[i]){ 
            indegree[it]++;
        }
    }
    queue<int>q;
    for(int i=0; i<V; i++){
        if(indegree[i]==0)q.push(i);
    }
    while(q.size()){
        int node = q.front();
        ans.push_back(node);
        q.pop();
        for(int c: adj[node]){
            indegree[c]--;
            if(indegree[c]==0){
                q.push(c);
            }
        }
    }
    // for(auto it: ans)cout<<it<<endl;
    vector<bool>vis(k,false);
    for(auto it: ans)vis[it]=true;
    for(int i=0; i<V; i++)if(!vis[i])ans.push_back(i);
    string str;
    for(auto it: ans)str.push_back('a'+it);
    return str;
}

int main(){
    int n=5, k=4;
    string s[] = {"baa","abcd","abca","cab","cad"};
    // cout << findOrder(s, n,k) ;
}