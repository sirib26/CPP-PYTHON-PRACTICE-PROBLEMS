l=list(map(int,input().split()))
for i in range(1,len(l)):
    temp=l[i]
    j=i-1
    while j>=0:
        if l[j]>temp:
            l[j+1]=l[j]
        else:
            break
        j-=1
    l[j+1]=temp
print(l)