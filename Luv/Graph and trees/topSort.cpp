#include<bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(int i, vector<int> adj[], stack<int>&st, vector<bool>&vis){
   vis[i]=true;
   for(auto child: adj[i]){
      if(!vis[child]){
         dfs(child,adj,st,vis);
      }
   }
   st.push(i);
}

vector<int> topoSort(int V, vector<int> adj[]) 
{
   vector<bool>vis(V,false);
   vector<int>ans;
   stack<int>st;
	for(int i=0; i<V; i++){
      if(!vis[i])dfs(i,adj,st,vis);
   }
   while(!st.empty()){
      ans.push_back(st.top());
      st.pop();
   }
   return ans;

}


	

int main(){
   
}