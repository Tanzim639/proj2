import math

def find_max_divisor(a, b):
    gcd = math.gcd(a, b)
    
    return gcd
    # else:
    #     return "I am so dumb that I couldn't solve this problem."

a, b = map(int, input().split())

# Output
ans = (find_max_divisor(a, b))
if(ans==0):
    print('"I am so dumb that I couldn\'t solve this problem."')
elif(a%ans==0 and b%ans==0):
    print(ans)
else:
    print('"I am so dumb that I couldn\'t solve this problem."')

