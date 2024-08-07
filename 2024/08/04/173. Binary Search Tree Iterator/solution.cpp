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
class BSTIterator {
public:
    vector<int>v;
    int i;
    int n;
    void solve(TreeNode* root){
        if(root==NULL) return;
        solve(root->left);
        v.push_back(root->val);
        solve(root->right);
        return;
    }
    BSTIterator(TreeNode* root) {
        i=0;
        solve(root);
        n=v.size();
    }
    
    int next() {
        int x=v[i];
        i++;
        return x;
    }
    
    bool hasNext() {
        return i<n;

    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */