class Robot:
    def introduction(self): #have to pass self in the argument to any function that is within a class
        print("Hello, my name is " + self.name)
        print("My color is " + self.color)
        print("My weapon is " + self.weapon)
        print("My special move is "+ self.specialmove)
        print("---------------------------------------------")

robot1 = Robot() #creates an object with the class of robot
robot1.name = "Destroyer"
robot1.color = "Black"
robot1.weapon = "Bow"
robot1.specialmove = "Rain Appon Me"
robot1.introduction() #uses the method we created in the class

robot2 = Robot()
robot2.name = "Magma"
robot2.color = "Red"
robot2.weapon = "Staff"
robot2.specialmove = "Errupt"
robot2.introduction() 

robot3 = Robot()
robot3.name = "Death"
robot3.color = "Red"
robot3.weapon = "Sword"
robot3.specialmove = "Death Bestoyer"
robot3.introduction() 

question1 = input("which one will you choose? Type their name: ").lower()

if question1 == "destroyer":
    print("1")
elif question1 == "magma":
    print("2")
elif question1 == "death":
    print("3")
else:
    print(question1)