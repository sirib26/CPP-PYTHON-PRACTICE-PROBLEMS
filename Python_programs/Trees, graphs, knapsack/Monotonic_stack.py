def next_greater(nums):
    res=[-1]*len(nums)
    stack=[]
    
    for i,num in enumerate(nums):
        while stack and nums[stack[-1]] < num:
            idx=stack.pop()
            res[idx]=num
        stack.append(i)
    return res
        

nums=list(map(int,input().split(',')))
print(next_greater(nums))
