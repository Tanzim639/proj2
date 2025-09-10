# f = open("PythonHarry/MyFile.txt","r")
# # print(f)
# text = f.read()
# print(text)
# f.close()

# f2 = open("PythonHarry/MyFile2.txt","w")  # w does rewrite
# f2.write("hello world i am")
# f2.close()

# f3 = open("PythonHarry/MyFile2.txt","a") #a does append
# f3.write("\nthe next line")
# f3.close()

with open("PythonHarry/MyFile2.txt","a") as f4:  #do not need to close file if done this way
    f4.write("\nwhats up")