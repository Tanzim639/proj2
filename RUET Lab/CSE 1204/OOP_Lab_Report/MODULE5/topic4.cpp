#include<iostream>
using namespace std;

class A {
public:
    virtual void Print() = 0;
};

class B : public A {
public:
    void Print() override {
        cout << "Inside Print() of class B" << endl;
    }
};

int main() {
    //A a; 
    B b;
    b.Print(); 
    //A a1; 
    B b1;
    A *p2;
    p2 = &b1;
    p2->Print(); 
}
