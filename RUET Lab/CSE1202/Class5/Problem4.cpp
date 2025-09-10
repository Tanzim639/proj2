#include <iostream>
using namespace std;
//Love Story
//https://codeforces.com/problemset/problem/1829/A
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string cf = "codeforces";
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < 10; i++)
        {
            if (cf[i] != s[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}