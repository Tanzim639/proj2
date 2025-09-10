#include<bits/stdc++.h>
using namespace std;
    
class A{
    private: 
        int x;
        int y;
    public:
        A(int a){
            cout<<a<<endl;
        }
};

class B: class A{

};

int main(){
    B obj(5);

}