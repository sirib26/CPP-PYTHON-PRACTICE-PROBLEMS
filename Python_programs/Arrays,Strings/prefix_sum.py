from collections import defaultdict
def subarraySum(nums,k):
    n=len(nums)
    cnt=0
    prefix_sum=0
    freq=defaultdict(int)
    
    for j in range(n):
        prefix_sum += nums[j]
        
        if prefix_sum == k:
            cnt+=1
        
        val=prefix_sum-k
        if val in freq:
            cnt += freq[val]
            
        freq[prefix_sum] +=1
    print(freq)
    return cnt
    
    


nums = [1, 2, 3]
k = 3
print(subarraySum(nums, k))