#include<iostream>
using namespace std;

class A {
public:
    virtual void Print() {
        cout << "Inside Print() of class A" << endl;
    }
};

class B : public A {
public:
    void Print()  {
        cout << "Inside Print() of class B" << endl;
    }
};

int main() {
    A a;
    a.Print(); 
    B b;
    b.Print(); 
    A a1;
    A *p1;
    p1 = &a1;
    p1->Print(); 
    B b1;
    A *p2;
    p2 = &b1;
    p2->Print(); 

}
