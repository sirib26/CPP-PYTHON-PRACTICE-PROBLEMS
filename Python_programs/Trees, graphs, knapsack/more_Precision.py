def sqrtnumber(n):
    start=0
    end=n
    ans=-1
    while(start <= end):
        mid=start+(end-start)//2
        sqr=mid*mid
        if(sqr == n):
            return mid
        if(sqr > n):
            end=mid-1
        else:
            ans=mid
            start=mid+1
    return ans
def morePrecision(n, precision, temp_sol):
    factor=1
    ans=temp_sol
    for _ in range(precision):
        factor /= 10
        j=ans
        while(j*j <= n):
            ans=j
            j+=factor
    return ans
     
    

n=int(input())
temp_sol=sqrtnumber(n)
res=morePrecision(n,3,temp_sol)
print(f"{res:.3f}")

