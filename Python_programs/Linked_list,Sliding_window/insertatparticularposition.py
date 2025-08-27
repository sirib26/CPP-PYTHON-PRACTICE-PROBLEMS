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
           
    def insertatpos(self,data,pos):
        new=node(data)
        curr=self.head
        for i in range(pos-2):
            curr=curr.next
        new.next=curr.next
        curr.next=new
        print()
    def deleteatbeg(self):
        self.head=self.head.next
        print()
    def deleteatend(self):
        curr=self.head
        while curr.next.next:
            curr=curr.next
        curr.next=None
        print()
    def deleteatpos(self,val):
        curr=self.head
        while curr:
            if curr.next.data==val:
                break
            curr=curr.next
        curr.next=curr.next.next
        print()
l=[1,2,3,4,5]
o=sll()
for i in range(len(l)):
    o.insertadtend(l[i])
o.printing()
o.insertatpos(2,3)
o.printing()
o.deleteatbeg()
o.printing()
o.deleteatend()
o.printing()
o.deleteatpos(3)
o.printing()