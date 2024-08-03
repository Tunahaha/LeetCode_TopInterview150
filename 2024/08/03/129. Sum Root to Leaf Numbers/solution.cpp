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
    int total = 0;

    void dfs(TreeNode * root, int numbers) {
        if(!root) {
            return;
        }

        if (!root->left && !root->right) {
            this->total += numbers * 10 + root->val;
        }
        numbers = numbers * 10 + root->val;
        this->dfs(root->left, numbers);
        this->dfs(root->right, numbers);
        return;

    }

    int sumNumbers(TreeNode* root) {
        this->dfs(root, 0);
        return this->total;
    }
};