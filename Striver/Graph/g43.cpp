#include<bits/stdc++.h>
using namespace std;
#define ll long long


void shortest_distance(vector<vector<int>>&matrix){
    int n = matrix.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j)matrix[i][j]=0;
            if(matrix[i][j]==-1)matrix[i][j]=1e9;
        }
    }
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][k]!=1e9 && matrix[k][j]!=1e9)
                matrix[i][j] = min(matrix[i][j], matrix[i][k]+matrix[k][j]);
            }
        }
    }
}


int findCity(int n, int m, vector<vector<int>>& edges, int distanceThreshold) {
    vector<vector<int>>matrix(n,vector<int>(n,-1));
    for(auto it: edges){
        matrix[it[0]][it[1]] = it[2];
        matrix[it[1]][it[0]] = it[2];
    }
    shortest_distance(matrix);
    int ans=0, mn=1e9;
    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(matrix[i][j]<=distanceThreshold)cnt++;
        }
        if(cnt<=mn){
            mn=cnt;
            ans=i;
        }
    }
    return ans;
}

int main(){

}