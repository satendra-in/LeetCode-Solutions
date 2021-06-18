# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:    
    def rangeSumBST(self, root: TreeNode, low: int, high: int) -> int:
        total = 0
        
        def helper(node):
            nonlocal total
            if not node:
                return
            if low <= node.val <= high:
                total += node.val
            if node.val < low:
                helper(node.right)
            elif node.val > high:
                helper(node.left)
            else:
                helper(node.left)
                helper(node.right)
                
        helper(root)
        return total 