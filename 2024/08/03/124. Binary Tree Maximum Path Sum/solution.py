# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        result=[root.val]

        def max_len(root):
            if root==None:
                return 0
            left_max=max(max_len(root.left),0)
            right_max=max(max_len(root.right),0)
            result[0]=max(result[0],root.val+left_max+right_max)
            return root.val+max(left_max,right_max)
        max_len(root)
        return result[0]


        
        