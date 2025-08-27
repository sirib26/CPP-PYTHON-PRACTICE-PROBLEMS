l=[[0,1],[1,2],[1,3],[2,3],[3,4],[4,2]]
d={i:[] for i in range(5)}
for i,j in l:
    d[i].append(j)
    #d[j].append(i)
print(d)
d={0: [1], 1: [2, 3], 2: [3], 3: [4], 4: [2]}
q=[0]  # bfs traversal 
vis={0}
while q:
    a=q.pop(0)
    print(a)
    for i in d[a]:
        if i not in vis:
            q.append(i)
            vis.add(i)
print()
            
def dfs(start,vis):
    vis.add(start)
    print(start)
    for i in d[start]:
        if i not in vis:
            dfs(i,vis)
dfs(0,set())