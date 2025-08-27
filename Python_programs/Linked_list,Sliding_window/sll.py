class node:
    def __init__(self,data):
        self.data=data
        self.next=None
class sll:
    def __init__(self):
        self.head=None
    def insertadtbeg(self,val):
        if self.head==None:     #this is created for every new linked list means this object is new for every list
            self.head=node(val) #create a object for node class
        else:
            new=node(val)
            new.next=self.head
            self.head=new
    def printing(self):
        curr=self.head
        while curr:
            print(curr.data,end="->")
            curr=curr.next
l=[1,2,3,4,5]
o=sll()
for i in range(len(l)):
    o.insertadtbeg(l[i])
o.printing()