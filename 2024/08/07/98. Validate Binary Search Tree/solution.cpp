class Solution {
public:
    bool dfs(TreeNode* node, long long max_val, long long min_val){
        if (!node){ 
            return true;
        }
        if (node->val >= max_val || node->val <= min_val){
            return false;
        }
        return dfs(node->left, node->val, min_val) && dfs(node->right, max_val, node->val);
    }
    
    bool isValidBST(TreeNode* root) {
        return dfs(root, LLONG_MAX, LLONG_MIN);
    }
};