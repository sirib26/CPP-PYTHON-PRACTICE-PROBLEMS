s=input()
k=int(input())
vowel="aeiou"
m=0
for i in range(len(s)-k+1):
    res=s[i:i+k]
    print(res)
    cnt=0
    for ch in res:
        if ch in vowel:
            cnt+=1
        else:
            cnt-=1
        m=max(cnt,m)
print(m)