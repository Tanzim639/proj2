#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 6> ax = {10, 60, 30, 70, 20};

    cout << "Third element of ax: " << ax.at(2) << endl;
    cout << "First element of ax: " << ax.front() << endl;
    cout << "Last element of ax: " << ax.back() << endl;
    ax.fill(50);
    cout << "Is ax empty? " << (ax.empty() ? "Yes" : "No") << endl;
    cout << "Size of ax: " << ax.size() << endl;
    cout << "Maximum size of ax: " << ax.max_size() << endl;
    cout << "Address of the first element of ax: " << &(*ax.begin()) << endl;
    auto ptr=ax.end(); ptr--;
    cout << "Address of the last element of ax: " << &(*ptr) << endl;

}
