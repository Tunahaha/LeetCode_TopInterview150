/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int res=INT_MIN;
    int path_sum(TreeNode* root){
        if (root == nullptr) {
            return 0;
        }
        int left=max(path_sum(root->left),0);
        int right=max(path_sum(root->right),0);
        res=max(res,left+right+root->val);
        return root->val+max(left,right);

    }
    int maxPathSum(TreeNode* root) {
        path_sum(root);
        return res;
    }
};