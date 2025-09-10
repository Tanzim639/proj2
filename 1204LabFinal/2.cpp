#include <bits/stdc++.h>
using namespace std;

class Cls{
    private:
        int a; int b;
    public:
        void setValue(){cin>>a>>b;}
        friend void mean(Cls &s);
};

void mean(Cls &x){
    cout<<"a = "<<x.a;
    cout<<endl;
    cout<<"b = "<<x.b;
    cout<<endl;
    cout<<"Mean is "<<(x.a+x.b)/2;
}

int main(){
    Cls x; 
    x.setValue();
    mean(x);
    
}