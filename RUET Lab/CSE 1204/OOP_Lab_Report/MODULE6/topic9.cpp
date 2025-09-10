#include <bits/stdc++.h>
using namespace std;

void Display(const list<int>& lst) {
    cout << "Forward direction: ";
    for (const auto& elem : lst) {
        cout << elem << " ";
    }
    cout << endl;
}

void DisplayRev(const list<int>& lst) {
    cout << "Reverse direction: ";
    for (auto it = lst.rbegin(); it != lst.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list<int> li;

    for (int i = 1; i <= 8; ++i) {
        li.push_back(i);
    }

    li.push_front(0);
    li.push_front(-1);

    Display(li);
    DisplayRev(li);

    cout << "Front element: " << li.front() << endl;
    cout << "Back element: " << li.back() << endl;

    li.pop_back();
    Display(li);

    li.pop_front();
    Display(li);

    int x = 5;
    auto it = find(li.begin(), li.end(), x);
    if (it != li.end()) {
        cout << x << " found in the list.\n";
    } else {
        cout << x << " not found in the list.\n";
    }

    int y = 3;
    li.insert(find(li.begin(), li.end(), y), 99);
    Display(li);

    li.insert(next(find(li.begin(), li.end(), y)), 88);
    Display(li);

    cout << "Count of " << x << ": " << count(li.begin(), li.end(), x) << endl;

    cout << "Count of even elements: " << count_if(li.begin(), li.end(), [](int elem) { return elem % 2 == 0; }) << endl;

    li.erase(find(li.begin(), li.end(), x));
    Display(li);

    li.erase(li.begin(), next(li.begin(), 4));
    Display(li);

    li.remove(x);
    Display(li);

    li.remove_if([](int elem) { return elem > 5; });
    Display(li);

    list<int> anotherList = {100, 200, 300};
    li.assign(anotherList.begin(), anotherList.end());
    Display(li);

    int arr[] = {10, 20, 30, 40};
    li.assign(arr, arr + 4);
    Display(li);

    li.sort();
    Display(li);

    li.unique();
    Display(li);

    return 0;
}
