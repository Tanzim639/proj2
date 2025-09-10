#include <iostream>
using namespace std;


class Cls{
    private:
        int value;
    public:
        Cls(){}
        Cls(int val){
            value=val;
        }
        Cls(Cls &ob){
            this->value = ob.value;
        }
        void getValue(){
            cout<<value<<endl;
        }
};


int main(){
    Cls ob1(100);
    Cls ob2(ob1);
    ob2.getValue();
}