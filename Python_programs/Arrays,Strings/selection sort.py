arr=list(map(int,input().split()))
for i in range(len(arr)):
    min=arr[i]
    mini=i
    for j in range(i,len(arr)):
        if arr[j]<min:
            min=arr[j]
            mini=j
    arr[i],arr[mini]=arr[mini],arr[i]
print(arr)
