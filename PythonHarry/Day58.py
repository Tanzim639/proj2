class Person:
    def __init__(self,n,o,no) -> None:
        print("Hey I am a person")
        self.name = n
        self.occupation = o
        self.net_worth = no

    def info(self):
        print(f"{self.name} is a {self.occupation} and he has {self.net_worth} dollers")


me = Person("Tz", "Student", "100")
me.info()

virat = Person("Virat", "Crickter", "1000")
virat.info()
