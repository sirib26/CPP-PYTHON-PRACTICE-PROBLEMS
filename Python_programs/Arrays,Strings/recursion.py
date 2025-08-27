"""def fun(n):
    if n==0:
        return
    fun(n-1)
    print(n)
    fun(n-1)
fun(3)"""

#print table of a number:
"""def func(n,i):
    if i==11:
        return
    else:
        print(f"{n} * {i} = {n*i}")
        func(n,i+1)
func(2,1)"""

#factorial of a number:
"""def factorial(n):
    if n==0:
        return 1
    else:
        return n*factorial(n-1)
res=factorial(7)
print(res)"""

#fibonacci series:
"""def fib(n):
    if n==0 or n==1:
        return n
    else:
        return (fib(n-1)+fib(n-2))

n=8       
for i in range(n):
    print(fib(i),end=" ")
    
res=fib(8)
print(res)"""

#binary search:

def binary(arr,s,e,target):
    mid=(s+e)//2
    if s>e:
        return -1
    if target==arr[mid]:
        return mid
        break
    elif target > arr[mid]:
        return binary(arr,mid+1,e,target)
    else:
        return binary(arr,s,mid-1,target)
    
arr=[1,2,3,4,5]
s=0
l=len(arr)-1
res=binary(arr,s,l,target=6)
print(res)
