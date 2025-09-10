#include<bits/stdc++.h>
using namespace std;
#define ll long long

int minimumMultiplications(vector<int>& arr, int start, int end) {
    int mod = 1e5;
    vector<int>dist(100000,1e9);
    queue<pair<int,int>> q;
    q.push({0,start});
    while(q.size()){
        int node = q.front().second, steps = q.front().first;
        if(node==end){
            return steps;
        }
        q.pop();
        for(auto it: arr){
            int num = (it*node)%mod;
            if(dist[num] > steps+1){
                dist[num] = steps+1;
                q.push({steps+1, num});
            }
        } 
    }
    return -1;
}


int main(){

}