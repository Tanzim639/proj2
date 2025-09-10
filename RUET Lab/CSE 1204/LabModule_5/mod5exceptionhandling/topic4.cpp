#include<bits/stdc++.h>
using namespace std;
    
 
int main(){
    pair<int,string>px;
    px = make_pair(10,"Rajshahi");
    cout<<px.first<<" "<<px.second<<endl;
    // cout<<get<0>(px)<<endl;
    // px.first=20;
    px = {20, get<1>(px)};
    cout<<px.first<<" "<<px.second<<endl;
    pair<int,string>py={2000, "Laptop"};
    py.swap(px);
    cout<<px.first<<" "<<px.second<<endl;
    cout<<py.first<<" "<<py.second<<endl;

}