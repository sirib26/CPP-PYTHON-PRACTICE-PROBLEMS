class student:
    x=0 #class level variable all the object the value is same
    def __init__(self,n):
        s1.name=n  #it takes the value and stores it in a variable (like in a excel sheet)
        self.name=n #instance variable object level variable it differs 
        print(n)
    def __init__(self,n):
        print("this is a constructor")
        #student.fun()
    def fun(self):
        #print(self.name)
        print("this is a function")
    def m1(self):
        print("this is a method 1")
s1=student("abc")  #by default s1 object is being sent and self is a object which is takes a object
s2=student("xyz")
student.fun(s1)
print(s1.name,s2.name)
