#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long fl = ceil((double)n / a);
    long long fw = ceil((double)m / a);
    long long ans = fl * fw;

    cout << ans << endl;

    return 0;
}
