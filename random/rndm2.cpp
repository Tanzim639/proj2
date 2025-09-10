#include <bits/stdc++.h>
using namespace std;
void divide(int x, int y)
{
    int cnt = 0;
    while (1)
    {
        if(x<=0)break;
        // x = substraction(x, y);
        x-=y;
        cnt++;
    }
    cout << "Quotient is " << cnt << " and remainder is " << x << endl;
}
int main()
{
    int a,b; cin>>a>>b;
    divide(a,b);
}