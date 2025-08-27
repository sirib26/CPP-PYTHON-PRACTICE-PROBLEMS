l1=[1,2,3,4]
l2=[2,5,8,4]
l3=[0]*len(l1+l2)
i=0 
j=0
k=0
while i<len(l1) and j<len(l2):
    if l1[i]<l2[j]:
        l3[k]=l1[i]
        i+=1
        k+=1
    else:
        l3[k]=l2[j]
        j+=1
        k+=1
while i<len(l1):
    l3[k]=l1[i]
    i+=1
    k+=1
while j<len(l2):
    l3[k]=l2[j]
    j+=1
    k+=1
    
print(l3)