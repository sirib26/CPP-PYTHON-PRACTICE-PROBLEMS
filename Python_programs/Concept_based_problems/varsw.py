nums=list(map(int,input().split()))
k=int(input())
s=0
e=1
m=len(nums)
while e<len(nums):
    if sum(nums[s:e])<=k:
        e+=1
        while sum(nums[s:e])>=k:
            res=sum(nums[s:e])
            sum=res-nums[s]
            m=min(m,e-s)
            print(m)
            print(nums[s:e])
            s+=1
