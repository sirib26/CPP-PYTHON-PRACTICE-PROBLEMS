s=input()
freq={}
for ch in s:
    if ch in freq:
        freq[ch]+=1
    else:
        freq[ch]=1
even_freq=[]
odd_freq=[]
for key in freq:
    print(f"{key} : {freq[key]}")
    val=freq[key]
    if val%2==0:
        even_freq.append(val)
    else:
        odd_freq.append(val)
max_even=max(even_freq) if even_freq else 0
max_odd=max(odd_freq) if odd_freq else 0
print(max_odd-max_even)
    
    
