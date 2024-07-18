class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> hash_map;
        for(auto m:magazine){
            hash_map[m]++;
        }
        for(auto r:ransomNote){
            if(hash_map.find(r)!=hash_map.end()){
                hash_map[r]--;
                if(hash_map[r]==0){
                    hash_map.erase(r);
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};