class Node{
    public:
        int key;
        int val;
        Node*next;
        Node*pre;
        Node(int key,int val){
            this->key=key;
            this->val=val;
            next=NULL;
            pre=NULL;
        }
};
class LRUCache {
public:
    int cap;
    unordered_map<int, Node*> m;
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->pre=head;
    }
    void addNode(Node* newnode){
        Node* temp = head -> next;
        newnode -> next = temp;
        newnode -> pre = head;
        head -> next = newnode;
        temp -> pre = newnode;
    }
    void removeNode(Node* newnode){
        Node* new_pre=newnode->pre;
        Node* new_next = newnode -> next;
        new_pre->next=new_next;
        new_next->pre=new_pre;

    }
    
    int get(int key) {
        if(m.find(key)!=m.end()){
            Node* resNode = m[key];
            int ans = resNode -> val;
            m.erase(key);
            removeNode(resNode);
            addNode(resNode);
            m[key] = head -> next;
            return ans;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            Node* curr = m[key];
            m.erase(key);
            removeNode(curr);
        }
        if(m.size() == cap){
            m.erase(tail -> pre -> key);
            removeNode(tail -> pre);
        }
        addNode(new Node(key, value));
        m[key] = head -> next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */