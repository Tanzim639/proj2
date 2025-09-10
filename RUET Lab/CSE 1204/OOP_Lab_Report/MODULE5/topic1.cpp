#include <bits/stdc++.h>
using namespace std;


class Test{
    public:
        double sum(double a){
            return a;
        }

        double sum(double a, double b){
            return a+b;
        }

        double sum(int a, double b){
            return a+b;
        }

        double sum(double a, int b){
            return a+b;
        }
};


int main(){
    Test obj;
    cout<<obj.sum(9)<<endl;
    cout<<obj.sum(1.2,4.5)<<endl;
    cout<<obj.sum(5,3.4)<<endl;
    cout<<obj.sum(2.5+7)<<endl;
}

