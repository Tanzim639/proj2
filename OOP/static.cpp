#include <iostream>
using namespace std;


class Cls{
    private:
        int x;
        static int cnt;
    public:
        Cls(int x){
            this->x=x;
            cnt++;
        }
        static int getcnt(){
            return cnt;
        }
};

int Cls::cnt=0;

int main(){
    Cls ob(10), ob1(1), ob2(22);
    cout<<ob.getcnt()<<endl;
    cout<<Cls::getcnt()<<endl;
}