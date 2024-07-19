class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> temp_s;
        string temp="";
        for (auto i:s){
            if(i==' '){
                temp_s.push_back(temp);
                temp="";
                 continue;
            }
            temp+=i;
        }
        temp_s.push_back(temp);
        if(temp_s.size() != pattern.size())return false;
        unordered_map<char,string> mp;
        unordered_map<string,char> mp2;
        for(int i =0; i<pattern.size();i++ ){
            if(mp.find(pattern[i])==mp.end()){
                mp[pattern[i]] = temp_s[i];
                if(mp2.find(temp_s[i])!=mp2.end()) return false;
                mp2[temp_s[i]]=pattern[i];
            }
            else{
                if (mp[pattern[i]]!= temp_s[i]) return false;
            }

        }
        return true;
    }
};