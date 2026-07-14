import turtle as trtl
from random import randint
painter = trtl.Turtle()
wn = trtl.Screen()

wn.bgcolor("blue")
for x in range(100):

    x = randint(-100, 100)
    y = randint(-100, 100)

    painter.penup()
    painter.goto(x, y)
    painter.pendown()
    painter.stamp()

wn.mainloop()