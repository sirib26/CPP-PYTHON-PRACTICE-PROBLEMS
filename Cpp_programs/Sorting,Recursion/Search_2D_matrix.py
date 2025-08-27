def search_matrix(matrix,target):
    if not matrix or not matrix[0]:
        return False
    m=len(matrix)
    n=len(matrix[0])
    
    start=0
    end=m*n-1
    
    while(start<=end):
        mid=(start+end)//2
        row=mid//n
        col=mid%n
        
        mid_val=matrix[row][col]
        if(target==mid_val):
            return True
        elif(mid_val<target):
            start=mid+1
        else:
            end=mid-1
    return False
m=int(input())
n=int(input())
matrix=[list(map(int,input().split())) for _ in range(m)]
target = int(input())

print(search_matrix(matrix,target))
