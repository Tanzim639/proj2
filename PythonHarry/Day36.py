# a = input("Enter a number: ")
# print(f"Multiplivcation table of {a} is: ")

# try:
#     for i in range(1,11):
#         print(f"{int(a)}*{i}={int(a)*i}")
# except Exception as e:
#     # print("Invalid")
#     print(e)


try:
    num = int(input("Enter an integer: "))
    a = [6, 3]
    print(a[num])
except ValueError:
    print("Number entered is not an integer.")
    
except IndexError:
  print("Index Error")