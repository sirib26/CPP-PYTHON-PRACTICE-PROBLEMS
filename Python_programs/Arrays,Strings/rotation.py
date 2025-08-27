def rotation(s,g):
    if len(s)!=len(g):
        return False
    for i in range(len(s)):
        rotated=s[i:]+s[:i]
        if rotated==g:
            return True
    return False
s,g=input().split()
print(rotation(s,g))