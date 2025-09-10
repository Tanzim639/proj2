'''
class Parent:
    def parentMethod(self):
        print("Its a parent method")


class Child(Parent):
    def childMethod(self):
        print("Its a child method")
        super().parentMethod()

c1 = Child()
# c1.parentMethod()
c1.childMethod()
'''

class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id

class Programmer(Employee):
    def __init__(self, name, id, lang):
        super().__init__( name, id)
        self.lang = lang

rohan = Employee("Rohan Das", "420")
harry = Programmer("Harry", "2345", "Python")
print(harry.name)
print(harry.id)
print(harry.lang)