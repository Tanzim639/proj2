#include<bits/stdc++.h>
using namespace std;
    
 
int main(){
    array<int,6>ax={10,60,30,70,20}; 
    cout<<ax.at(3)<<endl;
    cout<<ax.front()<<endl;
    cout<<ax.back()<<endl;
    fill(ax.begin(),ax.end(),68);
    for(auto it: ax){
        cout<<it<<" ";
    }cout<<endl;
    cout<<ax.empty()<<endl;
    cout<<ax.size()<<endl;
    cout<<ax.max_size()<<endl;
    cout<<ax.begin()<<endl;
    auto itt = ax.end(); itt--;
    cout<<itt<<endl;
}