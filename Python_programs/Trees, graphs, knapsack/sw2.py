arr=list(map(int,input().split()))
k=int(input())
threshold=int(input())
n=len(arr)
avg1=s/k
cnt=0
for i in range(n-k+1):
    s=sum(s[i:i+k])
    print("sum")
    print(s)
    new_avg=s/k
    print(new_avg)
    if new_avg>=threshold:
        cnt+=1
        print(cnt)
print(cnt)