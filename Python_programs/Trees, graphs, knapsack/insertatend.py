class node:
    def __init__(self,data):
        self.data=data
        self.next=None
class sll:
    def __init__(self):
        self.head=None
    def insertadtend(self,val):
        if self.head==None:     #this is created for every new linked list means this object is new for every list
            self.head=node(val) #create a object for node class
        else:
            new=node(val)
            curr=self.head
            while curr.next:
                curr=curr.next
            curr.next=new
    def printing(self):
        curr=self.head
        while curr:
            print(curr.data,end="->")
            curr=curr.next
        print()
    def maxi(self):
        max=0
        temp=self.head
        while temp:
            if temp.data > max:
                max=temp.data
            temp=temp.next
        print(max)
l=[1,2,3,4,5]
o=sll()
for i in range(len(l)):
    o.insertadtend(l[i])
o.printing()
o.maxi()