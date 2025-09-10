def fact(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*fact(n-1)
    
print(fact(5))

def fibo(n):
    if(n==0 or n==1):
        return n
    else:
        return fibo(n-1)+fibo(n-2)

for i in range(10):
    print(fibo(i))

# 0 1 1 2 3