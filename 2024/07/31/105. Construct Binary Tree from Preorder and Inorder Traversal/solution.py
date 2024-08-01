# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
            inorder_idx = {inorder[i]: i for i in range(len(inorder))}
            def build_tree(preorder, inorder_start, inorder_end):
                if not preorder or inorder_start < 0 or inorder_end > len(inorder):
                    return None

                root_val = preorder[0]
                root_inorder_idx = inorder_idx[root_val]
                if root_inorder_idx > inorder_end or root_inorder_idx < inorder_start:
                    return None
                root = TreeNode(preorder.pop(0))
                root.left = build_tree(preorder, inorder_start, root_inorder_idx - 1)
                root.right = build_tree(preorder, root_inorder_idx + 1, inorder_end)

                return root
            return build_tree(preorder, 0, len(inorder) - 1)
        