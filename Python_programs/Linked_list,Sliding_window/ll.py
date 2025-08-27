class node:
    def __init__(self,data):
        self.data=data
        self.next=data

o=node(2)
a=node(3)
b=node(4)
o.next=a
a.next=b
print(o.data,o.next.data,o)
print(o.next.data,o.next.next,o.next)   #print(a.data,a.next,a)
print(o.next.next.data,o.next.next.next,o.next.next)    #print(b.data,b.next,b)