def substring(sub,main):
    n=len(main)
    m=len(sub)
    subindex=0
    count=0
    for i in range(n):
        if main[i]==sub[subindex]:
            subindex+=1
            if subindex==m:
                count+=1
                subindex=0
    return count
    
    
    
    
    
    
sub="abc"
main="asiribsiricsiriasiribsiric"
res=substring(sub,main)
print(res)