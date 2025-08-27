wt=[10,2,5,3,4]
pr=[100,25,60,30,35]
W=19
print(list(zip(wt,pr)))
l=list(zip(wt,pr))
l.sort(key=lambda x:x[1]/x[0],reverse=True)
print(l)
profit=0
for w,p in l:
    if w>W:
        profit=profit+W*(p/w)
        W=0
        break
    W=W-w
    profit=profit+p
print(profit)