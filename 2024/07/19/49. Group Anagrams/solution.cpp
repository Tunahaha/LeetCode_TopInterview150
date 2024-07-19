class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> res;
        for (int i=0;i<strs.size();i++){
            string x=strs[i];
            sort(x.begin(),x.end());
            mp[x].push_back(strs[i]);
        }
        for (auto j:mp){
            res.push_back(j.second);
        }
        return res;
    }
};