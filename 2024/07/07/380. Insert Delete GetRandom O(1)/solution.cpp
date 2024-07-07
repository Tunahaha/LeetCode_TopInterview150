class RandomizedSet {
    unordered_set<int>rs;

public:
    RandomizedSet() {
        rs={};
    }
    
    bool insert(int val) {
        if(rs.find(val) != rs.end()){
            return false;
        }
        rs.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if(rs.find(val) == rs.end()){
            return false;
        }
        rs.erase(val);
        return true;
        
    }
    
    int getRandom() {
        int idx = rand() % rs.size();
        return *next(rs.begin(), idx);
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */