class Employee:
    def __init__(self, name, salary) -> None:
        self.name = name
        self.salary = salary

    @classmethod
    def fromString(cls, str):  #class method used as an alternative constructor (name and salary coming from a same string)
        return cls(str.split(',')[0] , int(str.split(',')[1]))
    
    def showInfo(self):
        print(f'The name is {self.name} and salary is {self.salary}')


e1 = Employee("Harry" , 2000)
e1.showInfo()

e2 = Employee.fromString("Tz,500000")
e2.showInfo()