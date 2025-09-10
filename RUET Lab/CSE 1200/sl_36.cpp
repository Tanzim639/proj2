#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        int b;
        cin >> s >> b;
        int j = 0;
        if (s[0] == '-'){
            j = 1;
        }
        if (b < 0) {
            b = abs(b);
        }
        long long hh = 0;
        for ( ; j < s.size(); j++)
        {
            hh = hh*10 + (s[j] - '0');
            hh %= b;
        }
        if (hh == 0){
            cout << "Case " << i << ": divisible" <<'\n';
        }
        else{
            cout << "Case " << i << ": not divisible" <<'\n';
        }
    }
}
