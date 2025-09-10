dic1={
    1:100,
    3:300,
    2:200
}

print(dic1[2])
print(dic1.get(9)) #wont through even if key isnt exists
print(dic1)
print(dic1.keys())
print(dic1.values())

for i in dic1.keys():
    print(f"The value responding to the key {i} is {dic1[i]}")

print(dic1.items()) 

for key, value in dic1.items():
    print(f"The value responding to the key {key} is {value}")
  