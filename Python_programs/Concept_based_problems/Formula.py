s=input().strip()
nums=[]
ops=[]

for ch in s:
    if ch.isdigit():
        nums.append(int(ch))
    elif ch in "+-*/":
        ops.append(ch)
        
res=nums[0]
for i in range(len(ops)):
    if ops[i] == '+':
        res+=nums[i+1]
    elif ops[i] == '-':
        res-=nums[i+1]
    elif ops[i] == '*':
        res*=nums[i+1]
    elif ops[i] =='/':
        res//=nums[i+1]
print(res)