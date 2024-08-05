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
    private:
    void recur(TreeNode* node,int level,vector<int>& res){
        if(node==nullptr) return;
        if(level==res.size()) res.push_back(node->val);
        recur(node->right,level+1,res);
        recur(node->left,level+1,res);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        recur(root,0,res);
        return res;
    }
};