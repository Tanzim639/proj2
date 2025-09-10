class Person:
    name = "Rohim"
    occupation = "student"
    net_worth = 100

    def info(self):
        print(f"{self.name} is a {self.occupation} and he has {self.net_worth} dollers")


me = Person()
me.name = "Tz"
me.info()

virat = Person()
virat.name = "Virat Kohli"
virat.occupation = "Cricketer"
virat.net_worth = 1000
virat.info()
