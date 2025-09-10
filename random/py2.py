def func(n):
    if n%2==0:
        return (n/2)*(n+1)
    else:
        return (n/2)*(n+1)



n=int(input())
x=(2*n)+2
mul=(-0.5)+(((1+(4*x))**(0.5))/2)
mul2=(-0.5)-(((1+(4*x))**(0.5))/2)
# print(mul)
if mul2>0:
    if mul2>mul:
        mul=mul2
mul=int(mul)
mull=mul+1
haha=func(mull)
if(haha<=n+1):
    mul=mull

print(n-mul+1) 