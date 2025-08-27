"""l=list(map(int,input().split()))
for i in range(len(l)):
    a=0
    for j in range(len(l)-i-1):
        if l[j+1] > l[j]:
            l[j],l[j+1]=l[j+1],l[j]
            a=1
    if a==0:
        break
print(l)"""
l=[[2,3],[6,7],[2,2],[4,3],[0,6]]
for i in range(len(l)):
    a=0
    for j in range(len(l)-i-1):
        if sum(l[j+1]) < sum(l[j]):
            l[j],l[j+1]=l[j+1],l[j]
            a=1
    if a==0:
        break
print(l)
            