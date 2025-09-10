#include <iostream>
using namespace std;
class Counter
{
private:
    int count;

public:
    Counter() { count = 0; }
    int get_count()
    {
        return count;
    }
    void operator++(int)
    {
        count++;
    }
};
int main(void)
{
    Counter c1, c2;
    c1++; c1++; c1++;
    cout << "c1=" << c1.get_count();
}