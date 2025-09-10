#include<bits/stdc++.h>
using namespace std;
    
 
int main(){
    stack<int>st;
    cout<<st.empty()<<endl;
    st.push(100);
    st.push(10);
    st.push(190);
    st.push(900);
    st.push(5);
    st.push(71);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;

}