'''# Write a python program to translate a message into secret code language. Use the rules below to translate normal English into secret code language

# Coding:
# if the word contains atleast 3 characters, remove the first letter and append it at the end
#   now append three random characters at the starting and the end
# else:
#   simply reverse the string

# Decoding:
# if the word contains less than 3 characters, reverse it
# else:
#   remove 3 random characters from start and end. Now remove the last letter and append it to the beginning

# Your program should ask whether you want to code or decode'''

#code:

import random

def random3():
    (a) = random.randint(97,122)
    (b) = random.randint(97,122)
    (c) = random.randint(97,122)
    return chr(a)+chr(b)+chr(c)



def encryption():
    msg = input("Enter your msg that you wanna encrypt: ")
    words = msg.split()
    for i in range(len(words)):
        if(len(words[i])<3):
            words[i] = words[i][::-1]
        else:
            words[i]+=words[i][0]
            words[i] = words[i][1:]
            words[i]=random3()+words[i]+random3()

    newMsg = " ".join(i for i in words)
    print(newMsg)

def decryption():
    msg = input("Enter the msg you wanna decrypt: ")
    words = msg.split()
    for i in range(len(words)):
        if(len(words[i])<3):
            words[i]=words[i][::-1]
        else:
            words[i]=words[i][3:-3]
            words[i]=words[i][-1]+words[i]
            words[i]=words[i][:-1]
    newMsg = " ".join(i for i in words)
    print(newMsg)

a = input("Press e if you wanna encrypt or d if you wanna decrypt: ")
if a=="e":
    encryption()
elif a=="d":
    decryption()
else:
    print("Invalid")