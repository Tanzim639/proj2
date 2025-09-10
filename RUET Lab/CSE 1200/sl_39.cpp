#include<bits/stdc++.h> 
using namespace std;
bool func(int year) {
    string yearStr = to_string(year);
    set<char> digits;
    for (char digit : yearStr) {
        if (digits.count(digit) > 0) {
            return false;
        }
        digits.insert(digit);
    }
    return true;
}
int main() {
    int y;  cin >> y;
    while (1) {
        y++;
        if (func(y)) {
            cout << y << endl;
            break;
        }
    }
}
