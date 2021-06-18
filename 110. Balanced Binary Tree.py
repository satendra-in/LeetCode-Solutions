# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        #flag = True
        hmap = {}
        def height(root: TreeNode):
            nonlocal hmap
            if not root:
                return 0
            if hmap.get(id(root)):
                return hmap[id(root)]
            h = max(height(root.left), height(root.right)) + 1
            hmap[id(root)] = h
            return h
        
        def helper(root: TreeNode):
            if not root:
                return True
            return abs(height(root.left) - height(root.right)) < 2 and helper(root.left) and helper(root.right)
            
        return helper(root)
        #return flag
                
        
        