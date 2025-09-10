class Employee:
    company = "Apple"
    def showInfo(self):
        print(f"The name is {self.name} ans the company is {self.company}")

    @classmethod #this makes the changeCompany function to change the class variable... without it , it would change the instance variable
    def changeCompany(cls, company):
        cls.company = company


e1 = Employee()
e1.name = "Harry"
e1.showInfo()
e1.changeCompany("Mac")
e1.showInfo()
print(Employee.company)