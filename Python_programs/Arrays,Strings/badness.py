s=list(input())

n=len(s)

for i in range(n):

    if s[i]=='W':

        if i==0:

            j=1

            while j<n:

                if s[j]!='W':

                    s[i]=s[j]

                    break

                j+=1

        else:

            s[i]=s[i-1]

badness=0

for i in range(1,n):

    if s[i]!=s[i-1]:

        badness+=1

print(badness)

 