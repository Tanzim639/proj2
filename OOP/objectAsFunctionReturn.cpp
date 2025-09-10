#include <iostream>
using namespace std;


class Ball{
    private:
        int speed;
    public:
        Ball(){}
        Ball(int speed){
            this->speed = speed;
        }
        void getSpeed(){
            cout<<speed<<endl;
        }
        Ball avgSpeed(Ball *ob){
            Ball newBall;
            newBall.speed = (ob->speed + speed)/2;
            return newBall;
        }
};


int main(){
    Ball b1(100), b2(120) , b3;
    b3 = b1.avgSpeed(&b2);
    b3.getSpeed();
}