class node:
    def __init__(self,data):
        self.val=data
        self.left=None
        self.right=None
def dfs_inorder(root):
    if root==None:
        return
    dfs_inorder(root.left)
    print(root.val,end=" ")
    dfs_inorder(root.right)
def dfs_preorder(root):
    if root==None:
        return 
    print(root.val,end=" ")
    dfs_preorder(root.left)
    dfs_preorder(root.right)
def dfs_postorder(root):
    if root==None:
        return
    dfs_postorder(root.left)
    dfs_postorder(root.right)
    print(root.val,end=" ")
def bfs(root):
    q=[root]
    while q:
        a=q.pop(0)
        print(a.val,end=" ")
        if a.left:
            q.append(a.left)
        if a.right:
            q.append(a.right)
root=node(1)
root.left=node(2)
root.right=node(3)
root.left.left=node(4)
root.left.right=node(5)
root.right.left=node(6)
print("Inorder Traversal : ")
dfs_inorder(root)
print()
print("preorder Traversal : ")
dfs_preorder(root)
print()
print("postorder Traversal : ")
dfs_postorder(root)
print()
print("Breadth first search : ")
bfs(root)

        
