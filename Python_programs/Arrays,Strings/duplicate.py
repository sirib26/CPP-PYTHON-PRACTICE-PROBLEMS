#arr=[0,0,3,3,5,6]
input_str = input("Enter")
input_str = input_str.strip()[1:-1]
arr = list(map(int, input_str.split(',')))

n=len(arr)
print(arr)
i=0
for j in range(1,n):
    if arr[j]!=arr[i]:
        i+=1
        arr[i]=arr[j]
for k in range(i+1,n):
    arr[k]='_'
print(arr)
        