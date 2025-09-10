#include <iostream>
#include <vector>

using namespace std;

bool canCreateExpression(int N, int X, vector<int>& A, int currentSum, int index) {
    if (index == N) {
        return currentSum == X;
    }

    if (canCreateExpression(N, X, A, currentSum + A[index], index + 1)) {
        return true;
    }

    if (canCreateExpression(N, X, A, currentSum - A[index], index + 1)) {
        return true;
    }

    return false;
}

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    if (canCreateExpression(N, X, A, A[0], 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
