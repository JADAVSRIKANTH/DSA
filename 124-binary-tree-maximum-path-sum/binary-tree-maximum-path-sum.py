# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        self.ans=float("-inf")
        def getssum(node):
            if not node: return 0
            left=max(0,getssum(node.left))
            right=max(0,getssum(node.right))
            self.ans=max(self.ans,node.val+left+right)
            return node.val+max(left,right)
        getssum(root)
        return self.ans

        