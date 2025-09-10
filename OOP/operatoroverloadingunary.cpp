#include <iostream>
#include <string>
using namespace std;

class Counter{
    private:
        int count;
    public:
        Counter(int c){
            count=c;
        }
        void getcnt(){
            cout<<count<<endl;
        }
        void operator ++(){
            count++;
        }
        void operator ++(int){ //postfix
            count++;
        }
};

int main(){
    Counter ob(100);
    ++ob;
    ++ob;
    ob++;
    ob.getcnt();
}