l=[3,10,4,2,1,2,6,1,7,2,9]
new_list=[]
for i in range(0,len(l)):
    for j in range(i+1,len(l)):
        if l[j]>i:
            maximum=l[j]
            maximum=max(maximum,l[j])
        new_list.append(maximum)
print(new_list)