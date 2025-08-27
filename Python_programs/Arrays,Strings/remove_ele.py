nums=list(map(int,input().split()))
val=int(input())
nums=[i for i in nums if i!=val]
print(nums)