/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;
        unordered_map<Node*, Node*> res;
        return dfs(node,res);
    }

    Node* dfs(Node* node, unordered_map<Node*, Node*>& res) {
        if (res.find(node) != res.end()) {
            return res[node];
        }
        Node* copy = new Node(node->val);
        res[node]=copy;
        for (Node* neighbor : node->neighbors) {
            copy->neighbors.push_back(dfs(neighbor, res));
        }
        return copy;
    }

};