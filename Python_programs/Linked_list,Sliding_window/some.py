"""heights=list(map(int,input().split()))
heights.sort()
print(heights)


def fun(x):
    return x[i]
arr=[[2,3],[6,7],[2,2],[4,3],[0,6]]
l.sort(key=fun)
print(l)

l.sort(key=lambda x:x[1])"""

names=["mary","john","emma"]
heights=[180,165,170]
a=list(zip(names,heights))
print(a)
a.sort(key=lambda x:x[1])
a.reverse()
print(a)
for i in a:
    print(i[0])
    
    
     """names.sort(key=lambda x:heights[names.index()])
       return names"""
