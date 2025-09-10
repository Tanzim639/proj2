cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
cities2 = {"Tokyo", "Seoul", "Kabul", "Madrid"}
cities3 = cities.union(cities2)
print(cities3)

a = {1,2,3}
b = {4,5}
a.update(b)
print(a)

aa = {1,2,3}
bb = {4,3}
cc = aa.intersection(bb)
print(cc)

x = {1,2,3,4}
y = {3,4,5,6}
x.intersection_update(y)
print(x)

A = {1,2,3,4,5,6}
B = {5,6,7,8,9}
C = A.symmetric_difference(B)
print(C)

A = {1,2,3,4,5,6}
B = {5,6,7,8,9}
A.symmetric_difference_update(B)
print(A)

s1 = {"a","b","c","d"}
s2 = {"c","d","e","f"}
s3 = s1.difference(s2)  #s1-s2
print(s3)

S1 = {"a","b","c","d"}
S2 = {"c","d","e","f"}
S1.difference_update(S2)  #s1-s2
print(S1)


cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
cities2 = {"Tokyo", "Seoul", "Kabul", "Madrid"}
print(cities.isdisjoint(cities2))

cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
cities2 = {"Seoul", "Kabul"}
print(cities.issuperset(cities2))
cities3 = {"Seoul", "Madrid","Kabul"}
print(cities.issuperset(cities3))

cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
cities2 = {"Delhi", "Madrid"}
print(cities2.issubset(cities))

cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
cities.add("Helsinki")
print(cities)

cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
cities2 = {"Helsinki", "Warsaw", "Seoul"}
cities.update(cities2)
print(cities)

cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
cities.remove("Tokyo")
print(cities)

# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities.remove("Seoul") #error .. using discard , no error
# print(cities)

cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
item = cities.pop()
print(cities)
print(item)

cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
del cities
#print(cities) #error

cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
cities.clear()
print(cities)

info = {"Carla", 19, False, 5.9}
if "Carla" in info:
    print("Carla is present.")
else:
    print("Carla is absent.")