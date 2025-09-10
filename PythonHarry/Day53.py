# #MAP
# l = [1,2,3,4,5]
# # def cube(x):
# #     return x*x

# mp = map(lambda x: x*x , l)
# print(mp)

# l2 = list(mp)
# print(l2)


# #FILTER:
# lst = [2,4,7,1,3,9,2,5]
# ft = filter(lambda x: x>=4 , lst)
# print(ft)
# lst2 = list(ft)
# print(lst2)


#REDUCE
from functools import reduce

# List of numbers
numbers = [1, 2, 3, 4, 5]

# Calculate the sum of the numbers using the reduce function
sum = reduce(lambda x,y: x+y , numbers)

# Print the sum
print(sum)