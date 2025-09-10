#include <bits/stdc++.h>
using namespace std;

template <typename T1, typename T2>
class A {
private:
    T1 x;
    T2 y;

public:
    void setData(T1 x, T2 y) {
        this->x = x;
        this->y = y;
    }

    auto Sum() {
        return x + y;
    }
};

int main() {
    A<int, int> obj1;
    obj1.setData(5, 10);
    cout << "Sum for int+int: " << obj1.Sum() << endl;

    A<int, double> obj2;
    obj2.setData(5, 10.5);
    cout << "Sum for int+double: " << obj2.Sum() << endl;

    A<double, int> obj3;
    obj3.setData(5.5, 10);
    cout << "Sum for double+int: " << obj3.Sum() << endl;

    A<double, double> obj4;
    obj4.setData(5.5, 10.5);
    cout << "Sum for double+double: " << obj4.Sum() << endl;

}
