#include <iostream>

using namespace std;

class A {
private:
    int x;
protected:
    int y;
public:
    int z;
};

class B : public A {
public:
    void accessMembersB() {
        cout << "B - Accessing members of class A:\n";
        cout << "y (protected) = " << y << "\n";
        cout << "z (public) = " << z << "\n";
    }
};

class C : public B {
public:
    void accessMembersC() {
        cout << "C - Accessing members of class A (indirectly through B):\n";
        cout << "y (protected) = " << y << "\n";
        cout << "z (public) = " << z << "\n";
    }
};

class D : public A, public B {
public:
    void accessMembersD() {
        cout << "D - Accessing members of class A and B:\n";
        cout << "A's members:\n";
        
        cout << "B's members:\n";
        
    }
};

class E : public A {
public:
    void accessMembersE() {
        cout << "E - Accessing members of class A:\n";
        cout << "y (protected) = " << y << "\n";
        cout << "z (public) = " << z << "\n";
    }
};

class F : public A {
public:
    void accessMembersF() {
        cout << "F - Accessing members of class A:\n";
        cout << "y (protected) = " << y << "\n";
        cout << "z (public) = " << z << "\n";
    }
};

int main() {
    B b;
    C c;
    D d;
    E e;
    F f;

    b.accessMembersB();
    c.accessMembersC();
    d.accessMembersD();
    e.accessMembersE();
    f.accessMembersF();

}
