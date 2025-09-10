#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long X;
    cin >> X;

    long long balance = 100;  
    int years = 0;  

    while (balance < X) {
        balance += balance / 100;  
        years++;
    }

    cout << years << endl;

}
