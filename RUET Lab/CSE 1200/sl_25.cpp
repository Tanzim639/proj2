#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     for (int j = 2; j <= n; j++)
     {
          int hh = 0;
          for (int i = 2; i <= sqrt(j); i++)
          {
               if (j % i == 0)
                    hh = 1;
          }
          if (hh == 0)
               cout << j << endl;
     }
}