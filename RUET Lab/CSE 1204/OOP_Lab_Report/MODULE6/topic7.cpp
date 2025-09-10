#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.pop();

    if (!st.empty()) {
        cout << "Top element: " << st.top() << endl;
    } else {
        cout << "Stack is empty.\n";
    }

    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}
