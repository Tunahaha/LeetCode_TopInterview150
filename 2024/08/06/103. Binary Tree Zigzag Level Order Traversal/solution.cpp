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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        int level=1;
        while(!q.empty()){
            int n=q.size();
            vector<int> arr(n);
            for (int  i =0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop(); 
                arr[i]=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(level%2==0) reverse(arr.begin(),arr.end());
            res.push_back(arr);
            level++;
        }
        return res;
    }
};