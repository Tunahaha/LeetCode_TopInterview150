# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        ans = []
        level = [root]
        while level:
            next_level = []
            ans.append([])
            for node in level:
                ans[-1].append(node.val)
                for child in (node.left, node.right):
                    if child:
                        next_level.append(child)
            level = next_level
        return ans

        return levels

        