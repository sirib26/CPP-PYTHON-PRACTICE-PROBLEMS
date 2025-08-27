arr=list(map(int,input().split()))
k=int(input())
m=0
n=len(arr)
for i in range(len(arr)-k+1):
    s=sum(arr[i:i+k])
    m=max(s,m)
print(m)

#sliding window algoritm
arr=list(map(int,input().split()))
k=int(input())
s=sum(arr[:k])
m=s
n=len(arr)
for i in range(1,n-k+1):
    s=s+arr[i+k-1]-arr[i-1]
    m=max(s,m)
print(m)

arr=[3,8,2,5,7,6,12]
n=len(arr)
w=4
curr=0
for i in range(w):
    curr+=arr[i]
print(curr)
maxi=curr
for i in range(1,n-w+1):
    curr=curr-arr[i-1]+arr[i+w-1]
    print(curr)
    maxi=max(curr,maxi)
print(maxi)
    
