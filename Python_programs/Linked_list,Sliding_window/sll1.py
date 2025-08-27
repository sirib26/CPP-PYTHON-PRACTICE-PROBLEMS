class node:
    def __init__(self,data):
        self.data=data
        self.next=None
class sll:
    def __init__(self):
        self.head=None
    def insertatbeg(self,val):
        if self.head is None:
            self.head=node(val)
        else:
            new=node(val)
            new.next=self.head
            self.head=new
    def printing(self):
        curr=self.head
        while curr:
            print(curr.data,end="->")
            curr=curr.next
        print("None")
l=[1,2,3,4,5]
o=sll()
for i in range(len(l)):
    o.insertatbeg(l[i])
o.printing()