#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=182;
    vector<pair<double ,int>> results(n);
    results[0]={0,0};
    for(int i=1; i<=181; i++){
        cout<<"For roll "<<i<<" ";
        double tmp;
        cin>>tmp;
        results[i]={tmp,i};
    }
    sort(results.begin(),results.end());
    reverse(results.begin(),results.end());
    cout<<endl;
    cout<<"RESULT:"<<endl;
    cout<<"Rank  cg  roll"<<endl;
    for(int i=0; i<=181; i++){
        cout<<i<<"->"<<results[i].first<<" : "<<results[i].second<<endl;
    }
}