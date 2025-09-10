#include <iostream>
#include <vector>

using namespace std;

vector<bool> isPrmArr(n + 1, true);
void sieveOfEratosthenes(int n) {
    for (int p = 2; p  < n; ++p) {
        if (isPrmArr[p]) {
            for (int i = p * 2; i <= n; i += p) {
                isPrmArr[i] = false;
            } 
        }
    }
    cout << "Prime numbers up to " << n << " are:\n";
    for (int i = 2; i <= n; ++i) {
        if (isPrmArr[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the limit for prime numbers: ";
    cin >> n;

    sieveOfEratosthenes(n);

    return 0;
}
