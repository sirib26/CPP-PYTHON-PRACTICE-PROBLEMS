wt=[3,2,1,5,4]
pr=[10,5,10,20,15]
capacity=8
dp=[[0]*(capacity+1) for i in range(len(wt)+1)]
for i in range(len(wt)+1):
    for j in range(capacity+1):
        if i==0 or j==0:
            dp[i][j]=0
        elif wt[i-1]>j:
            dp[i][j]=dp[i-1][j]
        else:
            dp[i][j]=max(dp[i-1][j],pr[i-1]+dp[i-1][j-wt[i-1]])
for i in dp:
    print(i)
print(dp[len(wt)][capacity])