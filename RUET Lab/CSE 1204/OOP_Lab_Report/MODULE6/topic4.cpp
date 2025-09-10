#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, string> px = make_pair(10, "Rajshahi");

    cout << "Int data member: " << px.first << endl;

    cout << "String data member: " << px.second << endl;

    get<0>(px) = 20;
    cout << "Modified Int data member: " << px.first << endl;

    pair<int, string> bx;
    bx = make_pair(30, "Dhaka");
    
    swap(px, bx);

    cout << "After swapping, px: " << px.first << " " << px.second << endl;
    cout << "After swapping, bx: " << bx.first << " " << bx.second << endl;

    return 0;
}
