#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
struct OrderedMultiset
{
    int id;
    ordered_set<pair<T, int>> st;
    OrderedMultiset() { id = 0; }
    void insert(T val) { st.insert({val, id++}); }
    void erase(T val) { st.erase(st.lower_bound({val, 0})); }
    int order_of_key(T val) { return st.order_of_key({val, 0}); }
    T find_by_order(int val)
    {
        pair<T, int> p = *st.find_by_order(val);
        return p.first;
    }
    typename ordered_set<pair<T, int>>::iterator lower_bound(T val) { return st.lower_bound({val, 0}); }
    typename ordered_set<pair<T, int>>::iterator upper_bound(T val) { return st.upper_bound({val, id}); }
    int size() { return st.size(); }
    void clear() { st = ordered_set<pair<T, int>>(); }
};

double get_median(OrderedMultiset<int> &curr, int d)
{
    double median;
    if (d % 2 == 1)
        median = curr.find_by_order(d / 2);
    else
        median = (curr.find_by_order(d / 2 - 1) + curr.find_by_order(d / 2)) / 2.0;
    return median;
}

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    OrderedMultiset<int> curr;
    for (int i = 0; i < d; i++)
        curr.insert(v[i]);
    int ans = 0;

    for (int i = d; i < n; i++)
    {
        double median = get_median(curr, d);
        if (v[i] >= 2 * median)
            ans++;
        curr.insert(v[i]);
        curr.erase(v[i - d]);
    }

    cout << ans << endl;

}
