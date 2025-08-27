arr = [[2, 3], [6, 7], [2, 2], [4, 3], [0, 6]]
n = len(arr)
temp = []

for i in range(n):
    total_sum = 0
    max_value = float('-inf')
    
    for j in range(2):
        total_sum += arr[i][j]
        max_value = max(max_value, arr[i][j])

        if total_sum > max_value:
            temp.append(arr[i][j])
print(temp)
        
        
        
arr.sort(key=sum)
print(arr)

        
    
