# importing the required module 
import matplotlib.pyplot as plt 


n = 1000000
is_prime = [0] * (n + 1)
def sieve(n):

    for p in range(2, int(n**0.5) + 1):
        if is_prime[p] == 0:
            for i in range(p*p, n + 1, p):
                if not is_prime[i]:
                    is_prime[i] = p

sieve(1000)

# Example usage:
# Set the value of n based on your requirement
sieve(n)


# x axis values 
x = [i for i in range(1000)] 

# corresponding y axis values 

y = [is_prime[i] for i in range(1000)]

# plotting the points 
plt.plot(x, y) 

# naming the x axis 
plt.xlabel('x - axis') 
# naming the y axis 
plt.ylabel('y - axis') 

# giving a title to my graph 
plt.title('My first graph!') 

# function to show the plot 
plt.show() 
