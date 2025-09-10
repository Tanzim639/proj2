#include<bits/stdc++.h>
using namespace std;
#define ll long long

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T>struct OrderedMultiset {
    int id;
    ordered_set<pair<T, int>> st;
    OrderedMultiset() {id = 0;}
    void insert(T val) {st.insert({val, id++});}
    void erase(T val) {st.erase(st.lower_bound({val, 0}));} 
    int order_of_key(T val) {return st.order_of_key({val, 0});}
    T find_by_order(int val) { pair<T, int> p = *st.find_by_order(val); return p.first;}
    typename ordered_set<pair<T,int>>::iterator lower_bound(T val) {return st.lower_bound({val, 0});}
    typename ordered_set<pair<T, int>>::iterator upper_bound(T val) {return st.upper_bound({val, id});}
    int size() {return st.size();}
    void clear() { st = ordered_set<pair<T, int>>();}
};
//// find_by_order, order_of_key

int activityNotifications(vector<int> expenditure, int d) {
    int n = expenditure.size();
    int ans=0;
    OrderedMultiset<int>st;
    for(int i=0; i<d; i++){
        st.insert(expenditure[i]);
    }
    int req = expenditure[1];
    int fir = st.find_by_order(d/2);
    int sec=0;
    if(d%2) sec = fir;
    else sec = st.find_by_order((d/2)+1);
    ans+=(req>=fir+sec);
    for(int i=d; i<n; i++){
        
    }

}


int main(){

}