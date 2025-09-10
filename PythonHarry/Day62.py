class Student: 
    def __init__(self, age, name): 
        self.__age = age      # An indication of private variable
        
    def __funName(self):  # An indication of private function
        self.y = 34
        print(self.y)


obj1 = Student(21,"Harry")

print(obj1._Student__age)
print(obj1._Student__funName())

