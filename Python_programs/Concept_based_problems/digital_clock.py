import turtle  #used for graphics
import datetime
import time
screen=turtle

s = turtle.Turtle()
t = turtle.Turtle()

s.speed(0)
t.speed(0)
s.shape("turtle")
turtle.bgcolor("pink")
s.color("Black")
s.hideturtle()
s.pensize(2)

s.penup()
s.goto(-200, -50)
s.pendown()
s.forward(400)
s.left(90)
s.forward(100)
s.left(90)
s.forward(400)
s.left(90)
s.forward(100)

t.color("Black")
t.hideturtle()
t.penup()
t.goto(-150, -35)
t.pendown()

s = datetime.datetime.now().second
m = datetime.datetime.now().minute
hr = datetime.datetime.now().hour

while True:
    t.write(f"{hr}:{str(m).zfill(2)}:{str(s).zfill(2)}", font=("Arial", 60, "normal"))
    time.sleep(1)  # Wait for 1 second before clearing
    t.clear()
    
    s += 1
    if s == 60:
        s = 0
        m += 1
    if m == 60:
        m = 0
        hr += 1
    if hr == 13:
        hr = 1

turtle.mainloop()



#s.hideturtle()
"""for i in range(100):
    for j in range(4):
        #s.forward(100)
        s.circle(100)
        s.left(90)
    s.right(2)"""
"""for i in range(400):
    s.circle(i,270)
    s.left(2)
    s.right(3)"""
"""s.penup()
s.goto(100,100)
s.pendown()
s.write("ABCDEF",font=("Arial",8,"normal"))"""
