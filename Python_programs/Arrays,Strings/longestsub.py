nums=input()
def lengthOfLongestSubstring(s):
    si=0
    m=0
    visited=set()
    for li in range(len(s)):
        while s[li] in visited:
            visited.remove(s[si])
            si+=1
            
        visited.add(s[li]) 
        m=max(m,li-si+1)
    return m
res=lengthOfLongestSubstring(nums)
print(res)