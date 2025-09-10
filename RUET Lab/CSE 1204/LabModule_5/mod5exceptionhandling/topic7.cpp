#include<bits/stdc++.h>
using namespace std;
    
 
int main(){
    queue<int>qu;
    cout<<qu.empty()<<endl;
    qu.push(100);
    qu.push(10);
    qu.push(190);
    qu.push(900);
    qu.push(5);
    qu.push(71);
    cout<<qu.front()<<endl;
    cout<<qu.back()<<endl;
    qu.pop();
    cout<<qu.front()<<endl;
 
}