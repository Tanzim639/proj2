#include <iostream>
using namespace std;
class A
{
protected:
    int x;
    public:
        A(){cout<<"A default constructor"<<endl;}
};
class B : virtual public A
{
public:
    B()
    {
        cout << "B constructor is called" << endl;
        x = 1;
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout << "C constructor is called" << endl;
        x = 2;
    }
};
class D : public B, public C
{
public:
    void getX()
    {
        cout << "x=" << x;
    }
};
int main()
{
    D d;
    d.getX();
}