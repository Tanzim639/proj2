#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        void setY(){
            cin>>y;
        }
        void setZ(){
            cin>>z;
        }
        void getY(){
            cout<<y<<endl;
        }
        void getZ(){
            cout<<z<<endl;
        }
};
class B: public A{
};

class C{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
};
class D: public C{
};
class E: public D{
};



int main(){
    B bobj;
    bobj.setY();
    bobj.getY();
}