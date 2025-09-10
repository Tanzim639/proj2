#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<pair<ll, ll>> vpr;
    sort(vpr.begin(), vpr.end(), [](const auto &a, const auto &b)
         {
            // Sort by first element in ascending order
            if (a.first != b.first)
            {
                return a.first < b.first;
            }
            // If first elements are the same, sort by second element in descending order
            return a.second > b.second; });
}