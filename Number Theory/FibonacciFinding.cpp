// https://www.hackerrank.com/challenges/fibonacci-finding-easy/problem

#include<iostream>
#define lli long long int
#define REP(i, n) for (int i = 0; i < n; i++)
using namespace std;

const int M =1e9+7;
lli I[2][2], trans[2][2];
lli fibvals[2];
void multiply(lli A[][2], lli B[][2])
{
    lli res[2][2];
    REP(i, 2){
    REP(j, 2)
    {
        res[i][j]=0;
        REP(k, 2)
        {
           lli x= (A[i][k]*B[k][j])%M;
           res[i][j]=(res[i][j]+x)%M;
        }
    }
    }

    REP(i,2) REP(j,2)
    {
        A[i][j]=res[i][j];
    }
}


lli getfib(int n)
{
    if (n <= 1)
    {
        return fibvals[n];
    }
    I[0][0] = I[1][1] = 1;
    I[0][1] = I[1][0] = 0;
    trans[1][0] =1; trans[0][1] = 1;trans[1][1] = 1;
    trans[0][0] = 0;

    
    while (n!=0)
    {
        if (n % 2)
        {
            multiply(I, trans);
            n--;
        }
        else
        {
            multiply(trans, trans);
            n /= 2;
        }
    }
    lli ans=(I[0][0]*fibvals[0]+I[1][0]*fibvals[1])%M;
    return ans;
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n;

        cin >>fibvals[0]>>fibvals[1]>> n;
        
        cout<<  getfib(n)<<endl;;
    }
    
}