#include<bits/stdc++.h>
using namespace std;

class A {
private:
    int x;

public:
    friend void Add(A& obj, int num);
    friend void IncX(A& obj, int m);
    friend void DecX(A& obj, int n);
    
    void getX() {
        cout << x << endl;
    }
};

void Add(A& obj, int num) {
    obj.x = num;
}

void IncX(A& obj, int m) {
    obj.x += m;
}

void DecX(A& obj, int n) {
    obj.x -= n;
}

int main() {
    A obj;
    Add(obj, 100);
    IncX(obj, 50);
    DecX(obj, 10);
    obj.getX();

}
