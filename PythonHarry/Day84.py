import time 

# def usingWhile():
#   i = 0
#   while i<1000:
#     i = i +1
#     print(i) 

# def usingFor():
#   for i in range(1000):
#     print(i)

# init = time.time()
# usingFor()
# t1 = time.time() - init
# init = time.time()
# usingWhile()
# print(time.time() - init)
# print(t1)


t = time.localtime()
formatted_time = time.strftime("%Y-%m-%d %H:%M:%S", t)
print(formatted_time)
time.sleep(3)
t = time.localtime()
formatted_time = time.strftime("%Y-%m-%d %H:%M:%S", t)
print(formatted_time)
