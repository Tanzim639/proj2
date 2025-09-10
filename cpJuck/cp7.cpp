#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i, n) for (ll i = 0; i < (n); i++)
#define iloop(i, init, n) for (ll i = (init); i < (n); i++)
#define autol(stl) for (auto itr : stl)
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vch vector<char>
#define vvch vector<vector<char>>
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void SOLVE() {
    ll n, m, k;
    cin >> n >> m >> k;

    vvll height(n + 1, vll(m + 1));
    iloop(i, 1, n + 1) iloop(j, 1, m + 1) cin >> height[i][j];

    vvch type(n + 1, vch(m + 1));
    iloop(i, 1, n + 1) iloop(j, 1, m + 1) cin >> type[i][j];

    // Compute total imbalance: sum(type0) - sum(type1)
    ll imbalance = 0;
    iloop(i, 1, n + 1) {
        iloop(j, 1, m + 1) {
            if (type[i][j] == '0') imbalance += height[i][j];
            else imbalance -= height[i][j];
        }
    }

    imbalance = abs(imbalance);

    // Build prefix sum of (count0 - count1) over matrix
    vvll count(n + 1, vll(m + 1, 0));
    iloop(i, 1, n + 1) {
        iloop(j, 1, m + 1) {
            ll delta = (type[i][j] == '0') ? 1 : -1;
            count[i][j] = count[i - 1][j] + count[i][j - 1] - count[i - 1][j - 1] + delta;
        }
    }

    vll deltas; // Store (count0 - count1) for each k×k submatrix
    iloop(i, k, n + 1) {
        iloop(j, k, m + 1) {
            ll delta = count[i][j] - count[i - k][j] - count[i][j - k] + count[i - k][j - k];
            if (delta != 0)
                deltas.push_back(abs(delta));
        }
    }

    ll gc = 0;
    autol(deltas) gc = __gcd(gc, itr);

    if (imbalance == 0) YES;
    else if (gc == 0) NO;
    else if (imbalance % gc == 0) YES;
    else NO;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll TEST_CASE = 1;
    cin >> TEST_CASE;
    while (TEST_CASE--) {
        SOLVE();
    }
}
