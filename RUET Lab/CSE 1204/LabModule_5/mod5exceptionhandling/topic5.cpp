#include<bits/stdc++.h>
using namespace std;
    
 
int main(){
    tuple<int,string,double>tx; 
    tx = make_tuple(100,"Kamal",3.5);
    cout<<get<0>(tx)<<"  "<<get<1>(tx)<<"  "<<get<2>(tx)<<endl;
    tx = make_tuple(get<0>(tx), get<1>(tx), 3.7);
    cout<<get<0>(tx)<<"  "<<get<1>(tx)<<"  "<<get<2>(tx)<<endl;
    tuple<int,string,double>ttx={1000,"hello",22.266}; 
    ttx.swap(tx);
    cout<<get<0>(tx)<<"  "<<get<1>(tx)<<"  "<<get<2>(tx)<<endl;
    cout<<get<0>(ttx)<<"  "<<get<1>(ttx)<<"  "<<get<2>(ttx)<<endl;


}