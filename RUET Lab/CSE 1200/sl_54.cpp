#include <iostream>
using namespace std;
bool func(long long N) {
    if (N == 1) {
        return true;
    }
    
    if (N % 10 == 0) {
        return func(N / 10) || func(N / 20);
    }
    
    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        if (func(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}
