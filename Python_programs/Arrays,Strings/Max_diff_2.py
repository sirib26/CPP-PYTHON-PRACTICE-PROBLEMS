from collections import Counter

s=input().strip()
k=int(input().strip())

max_diff = float('-inf')
print(len(s))
for i in range(len(s)):
    freq=Counter()
    for j in range(i,len(s)):
        freq[s[j]]+=1
        if j-i+1 >= k:
            for a in freq:
                if freq[a]%2 ==1:
                    for b in freq:
                        if a!=b and freq[b]%2==0 and freq[b]>0:
                            max_diff=max(max_diff,freq[a]-freq[b])
print(max_diff if max_diff != float('-inf') else -1)

