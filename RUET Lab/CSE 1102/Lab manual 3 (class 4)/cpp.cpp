#include<bits/stdc++.h>

using namespace std;
int main()
{
       int T;  cin >> T;
  for(int i=0; i<T; i++)
  {
     float x, y, a, b;   cin >> x >> y >> a >> b;
     float ans = (y-x)/(a+b);   float ans2=ans- int(ans) ;    float ans3=0;
     if(ans2==ans3){ cout<<ans<<endl; }
     else { cout<<"-1"<<endl; }


  }


return 0;
}
