#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        virtual void Print()=0;
};

class B:public A{
    public:
        void  print(){
            cout<<"Inside Print() of class B"<<endl;
        }
};

int main(){
    A aa;
    aa.print();

    B bb; 
    bb.print();

    // A a;
    // A *p;
    // p=&a;
    // p->print();

    // B b;
    // A *pp;
    // pp=&b;
    // pp->print();
}

