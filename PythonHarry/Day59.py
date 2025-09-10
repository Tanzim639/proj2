
#decorator

def greet(func):
    def modified_func(*args, **kwargs):
        print("Good Morning")
        func(*args, **kwargs)
        print("Good Bye")
    return modified_func

@greet
def hello():
    print("Hello World")

hello()
# greet(hello)() #If wasnt done by @greet, then had to do like this

@greet
def add(x,y):
    print(x+y)

add(100,50)

'''
import logging

def log_function_call(func):
    def decorated(*args, **kwargs):
        logging.info(f"Calling {func.__name__} with args={args}, kwargs={kwargs}")
        result = func(*args, **kwargs)
        logging.info(f"{func.__name__} returned {result}")
        return result
    return decorated

@log_function_call
def my_function(a, b):
    return a + b

my_function(10,5)
'''