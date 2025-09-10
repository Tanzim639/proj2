def func(n):
    if n%2==0:
        return (n/2)*(n+1)
    else:
        return (n/2)*(n+1)


n=int(input())
low=0
high=1000000000000000000
ans=0
while high-low>10:
    mid=low+((high-low)//2)
    hmm =  func(mid)
    if hmm<=n+1: 
        # ans=mid
        low=mid
    else:
        high=mid-1


i=high
while i>=low:
    if(func(i)<=n+1):
        ans=i
        break
    i=i-1
print(n-ans+1)