# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> int:
        count=defaultdict(int)
        count[0]=1
        def dfs(node,curr):
            if node is None:
                return 0
            curr+=node.val
            ans=count[curr-targetSum]      
            count[curr]+=1
            ans+=dfs(node.left,curr)+dfs(node.right,curr)  
            count[curr]-=1
            return ans
        return dfs(root,0)
        