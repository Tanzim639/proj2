#include <iostream>
using namespace std;
class Ball
{
private:
    int s;

public:
    Ball() {}
    Ball(int x)
    {
        s = x;
    }
    void AvgSpeed(Ball *b)
    {
        cout << (s + b->s) / 2 <<endl;
    }
};
int main()
{
    Ball b1(130), b2(140);
    b1.AvgSpeed(&b2);
    b2.AvgSpeed(&b1);
    return 0;
}