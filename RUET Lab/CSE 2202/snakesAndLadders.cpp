#include <bits/stdc++.h>
using namespace std;
#define ll long long


int func(const vector<pair<int, int>> &ladders, const vector<pair<int, int>> &snakes) {
    unordered_map<int, int> board;
    for (const auto &ladder : ladders) {
        board[ladder.first] = ladder.second;
    }
    for (const auto &snake : snakes) {
        board[snake.first] = snake.second;
    }

    vector<bool> visited(101, false);
    queue<pair<int, int>> q; 
    q.push({1, 0});
    visited[1] = true;

    while (!q.empty()) {
        auto it = q.front();
        auto square = it.first;
        auto rolls = it.second;

        q.pop();

        if (square == 100) return rolls;

        for (int dice = 1; dice <= 6; ++dice) {
            int nextSquare = square + dice;
            if (nextSquare > 100) continue;

            if (board.find(nextSquare) != board.end()) {
                nextSquare = board[nextSquare];
            }

            if (!visited[nextSquare]) {
                visited[nextSquare] = true;
                q.push({nextSquare, rolls + 1});
            }
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; 
    while (t--) {
        int n, m;
        cin >> n;
        vector<pair<int, int>> ladders(n);
        for (int i = 0; i < n; ++i) {
            cin >> ladders[i].first >> ladders[i].second;
        }
        cin >> m;
        vector<pair<int, int>> snakes(m);
        for (int i = 0; i < m; ++i) {
            cin >> snakes[i].first >> snakes[i].second;
        }

        cout << func(ladders, snakes) << "\n";
    }
}
