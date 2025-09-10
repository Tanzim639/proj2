def avg(*numbers):
    print(type(numbers))
    sum=0
    for i in numbers:
        sum=sum+i
    print(sum/len(numbers))

avg(10,20,30,40)

def sum(*numbers):
    sum=0
    for i in numbers:
        sum+=i
    return sum

print(sum(2,5,1))