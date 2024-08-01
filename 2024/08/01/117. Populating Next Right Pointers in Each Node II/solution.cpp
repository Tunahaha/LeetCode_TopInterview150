/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr){
            return nullptr;
        }
        queue<Node*> q;
        q.push(root);
        while(!empty(q)){
            int y=q.size();
            for(int i =0;i<y;i++){
                Node* x=q.front();
                if(x->left!=nullptr){
                    q.push(x->left);
                }
                if(x->right!=nullptr){
                    q.push(x->right);
                }
                q.pop();
                if(y-1!=i){
                    x->next=q.front();
                }
                else{
                    x->next=nullptr;
                }

            }
        }
        return root;
    }
};