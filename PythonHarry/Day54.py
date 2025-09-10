# == checkes if value is same 
# is checks if they are in memory

a = [1, 2, 3]
b = [1, 2, 3]
print(a == b)  # True
print(a is b)  # False

a = (1, 2, 3)
b = (1, 2, 3)
print(a == b)  # True
print(a is b)  # True

a = 3
b = 3 #python allocate one memory if multiple variable value is same
print(a == b)  # True
print(a is b)  # True