#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    s.push(4);
    s.push(98);
    s.push(33);
    s.push(12);  //cout<<s.size()<<endl;
    while (!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
    queue<int>q;
    q.push(4);
    q.push(98);
    q.push(33);
    q.push(12);
    while (!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    
}
