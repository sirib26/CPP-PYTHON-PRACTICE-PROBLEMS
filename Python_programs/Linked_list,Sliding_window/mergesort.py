l1=l[start:mid+1] 
l2=l[mid+1:end+1] 
i=0 
j=0 
k=start 
while i<len(l1) and j<len(l2): 
if l1[i]<l2[j]: 
l[k]=l1[i] 
i+=1 
k+=1 
else: 
l[k]=l2[j] 
j+=1 
k+=1 
while i<len(l1): 
l[k]=l1[i] 
k+=1 
i+=1 
while j<len(l2): 
l[k]=l2[j] 
j+=1 
k+=1 
def merge_sort(l,start,end): 
if end>start: 
mid=(start+end)//2 
merge_sort(l,start,mid) 
merge_sort(l,mid+1,end) 
merge(l,start,mid,end) 
l=[7,0,1,4,8,2,4] 
merge_sort(l,0,len(l)-1) 
print(l)