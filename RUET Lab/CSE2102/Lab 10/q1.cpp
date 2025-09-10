// A message is given as string with keys n and e as integer. Encrypt it.
#include <bits/stdc++.h>
using namespace std;
int func(int a, int n, int e)
{
    int x = 1;
    for (int i = 1; i <= e; ++i)
    {
        x = ((x % n) * (a % n)) % n;
    }
    return x;
}
int main()
{
    string s, a, b, str;
    cin >> s;
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 'A' and s[i] <= 'J')
        {
            str.push_back('0');
            str.push_back(char(s[i] - 'A' + '0'));
        }
        else
        {
            str += to_string(s[i] - 'A');
        }
    }
    int sz = str.size() / 2;
    string s1, s2;
    for (int i = 0; i < sz; ++i) s1.push_back(str[i]);
    for (int i = sz; i < str.size(); ++i) s2.push_back(str[i]);
    int num1 = stoi(s1), num2 = stoi(s2);
    cout << func(num1, n, e) << " " << func(num2, n, e) << "\n";
}