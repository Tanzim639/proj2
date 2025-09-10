#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple<int, string, double> tx = make_tuple(100, "Kamal", 3.5);

    cout << "Int data member: " << get<0>(tx) << endl;
    cout << "String data member: " << get<1>(tx) << endl;
    cout << "Double data member: " << get<2>(tx) << endl;

    get<2>(tx) = 3.7;
    cout << "Modified Double data member: " << get<2>(tx) << endl;

    tuple<int, string, double> bx;
    bx = make_tuple(200, "Rahim", 4.2);

    swap(tx, bx);

    cout << "After swapping, tx: " << get<0>(tx) << " " << get<1>(tx) << " " << get<2>(tx) << endl;
    cout << "After swapping, bx: " << get<0>(bx) << " " << get<1>(bx) << " " << get<2>(bx) << endl;

    return 0;
}
