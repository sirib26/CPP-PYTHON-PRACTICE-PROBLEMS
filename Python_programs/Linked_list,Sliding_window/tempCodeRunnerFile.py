k=int(input())
arr=list(map(int,input().split()))
arr.sort()
small=arr[-2]
large=arr[-1]
res=[]
avg=(small+large)/2
for num in arr:
    if num<avg:
        res.append(0)
    else:
        res.append(num)
print(sum(res))