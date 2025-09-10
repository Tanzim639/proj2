#include<bits/stdc++.h>
using namespace std;
    
template<class K, class U> class A{
        K x;
        U y;
    public:
        void setData(K a, U b){
            x=a; y=b;
        }
        K sum(){
            K s=x+y;
            return s;
        }
};

int main(){
    A<double,int>obj;
    obj.setData(10.5,5);
    cout<<obj.sum()<<endl;
}