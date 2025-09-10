
// if a<=10^18 then  a^b % M = (a%M)^b % M

#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

//If M<=10^18 ,when a*a, then the ll range passed. So, Binary Multiplication
long long binMultuply(long long a, long long b)
{
  long long ans = 0;
  while (b > 0)
  {
    if (b & 1)
    {
      ans = (ans + a) % M;
    }
    a = (a + a) % M;
    b >>= 1;
  }
  return ans;
}

int main()
{
}
