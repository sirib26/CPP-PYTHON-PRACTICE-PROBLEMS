n1=input()
n2=input()
def is_anagram(n1,n2):
    if len(n1)!=len(n2):
        return False
    count1=[0]*26
    count2=[0]*26

    n=len(n1)
    for i in range(n):
        count1[ord(n1[i]) - ord('a')] +=1
        count2[ord(n2[i]) - ord('a')] +=1
    return count1==count2
print(is_anagram(n1,n2))
        