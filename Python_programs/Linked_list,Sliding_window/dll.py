class node:
    def __init__(self,data):
        self.val=data
        self.next=None
        self.prev=None
class dll:
    def __init__(self):
        self.head=None
        self.tail=None
    def insertatbeg(self,data):
        if self.head==None:
            self.head=node(data)
            self.tail=self.head
        else:
            new=node(data)
            new.next=self.head
            self.head.prev=new
            self.head=new
    def printing(self):
        curr=self.head
        while curr:
            print(curr.val,end="->")
            curr=curr.next
        print("None")
    def insertatend(self,data):
        if self.head==None:
            self.head=node(data)
            self.tail=self.head
        else:
            new=node(data)
            self.tail.next=new
            new.prev=self.tail
            self.tail=new
    def maximum(self):
        max=0
        curr=self.head
        while curr:
            if curr.val>max:
                max=curr.val
            curr=curr.next
        print(max)
    def insertatpos(self,data,pos):
        
        new=node(data)
        curr=self.head
        for i in range(pos-2):
            curr=curr.next
        new.next=curr.next
        curr.next.prev=new
        new.prev=curr
        curr.next=new
        
    def deleteatbeg(self):
        self.head=self.head.next
        self.head.prev=None
    def deleteatend(self):
        self.tail=self.tail.prev
        self.tail.next=None
    def deleteval(self,val):
        curr=self.head
        while curr and curr.next:
            if curr.next.val==val:
                break
            curr=curr.next 
        curr.next=curr.next.next 
        curr.next.prev=curr      
        
                
    
l=[6,8,9,2]
o=dll()
for i in range(len(l)):
    o.insertatend(l[i])
o.printing()
o.maximum()
o.insertatpos(3,2)
o.printing()
o.deleteatbeg()
o.printing()
o.deleteatend()
o.printing()
o.deleteval(8)
o.printing()
o.deleteval(9)
o.printing()
