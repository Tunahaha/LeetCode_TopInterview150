/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        unordered_map<Node*,Node*> res;
        Node* temp=head;
        while(temp){
            res[temp]=new Node(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp){
            res[temp]->next=res[temp->next];
            res[temp]->random=res[temp->random];
            temp=temp->next;
        }

        return res[head];

    }
};