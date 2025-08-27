from collections import Counter
s=input()
freq=Counter(s)
print(freq)
print(sorted(freq,key = lambda x:(-freq[x],x)))
