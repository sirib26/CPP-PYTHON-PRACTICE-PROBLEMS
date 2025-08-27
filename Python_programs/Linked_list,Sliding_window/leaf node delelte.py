class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Node:
    @staticmethod
    def func(nums, si, li):
        if si > li:
            return None
        
        mid = (si + li) // 2
        root = TreeNode(nums[mid])
        
        root.left = Node.func(nums, si, mid - 1)
        root.right = Node.func(nums, mid + 1, li)
        
        return root

    @staticmethod
    def inorder_traversal(root):
        if root:
            Node.inorder_traversal(root.left)
            print(root.val, end=" ")
            Node.inorder_traversal(root.right)

# Sort the array before passing it to func()
nums = sorted([2, 9, 6, 4, 6])  # Sorting to ensure a valid BST
root = Node.func(nums, 0, len(nums) - 1)

# Print inorder traversal
Node.inorder_traversal(root)
