def ackermannFunction(m,n):
    if(m==0):
        return n+1
    elif(m!=0 and n==0):
        return ackermannFunction(m-1 , 1)
    else:
        return ackermannFunction(m-1 , ackermannFunction(m , n-1))
    
print(ackermannFunction(2,1))
