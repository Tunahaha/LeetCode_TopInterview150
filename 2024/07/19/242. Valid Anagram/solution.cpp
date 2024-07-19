class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for(auto i:s){
            count[i]++;
        }

        for(auto j:t){
            count[j]--;
        }

        for(auto x:count){
            if(x.second!=0){
                return false;
            }
        }
        return true;
    }
};