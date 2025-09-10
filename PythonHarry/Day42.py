list1 = [1,2,3,4,5,6]
tuple1 = enumerate(list1)
for item in tuple1:
    print(item)

list2 = ["a","hh","abc","ajs","too"]
for index,item in enumerate(list2,start=1):
    print(index,":",item)
    if index==3:
        print("yes its abc")