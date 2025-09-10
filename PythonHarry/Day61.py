class Employee:
    def __init__(self,name,id) -> None:
        self.name=name
        self.id=id
    def showDetails(self):
        print(f"The ID of {self.name} is {self.id}")

class Programmer(Employee):
    def showLanguage(self):
        print(f"{self.name} codes in Python")


e1 = Employee("Rohim", 200)
e1.showDetails()
p1 = Programmer("Karim", 1234)
p1.showDetails()
p1.showLanguage()