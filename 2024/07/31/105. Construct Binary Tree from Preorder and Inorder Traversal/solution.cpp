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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inorder_idx;
        for (int i = 0; i < inorder.size(); ++i) {
            inorder_idx[inorder[i]] = i;
        }
        
        return build_tree(preorder, inorder, 0, inorder.size() - 1, inorder_idx);
    }
    
private:
    TreeNode* build_tree(vector<int>& preorder, vector<int>& inorder, int inorder_start, int inorder_end, unordered_map<int, int>& inorder_idx) {
        if (preorder.empty() || inorder_start < 0 || inorder_end >= inorder.size() || inorder_start > inorder_end) {
            return nullptr;
        }
        
        int root_val = preorder[0];
        preorder.erase(preorder.begin());
        
        int root_inorder_idx = inorder_idx[root_val];
        if (root_inorder_idx > inorder_end || root_inorder_idx < inorder_start) {
            return nullptr;
        }
        
        TreeNode* root = new TreeNode(root_val);
        root->left = build_tree(preorder, inorder, inorder_start, root_inorder_idx - 1, inorder_idx);
        root->right = build_tree(preorder, inorder, root_inorder_idx + 1, inorder_end, inorder_idx);
        
        return root;
    }
};