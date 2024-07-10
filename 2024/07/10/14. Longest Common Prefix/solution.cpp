class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string pre_str=strs[0];
        int str_len=pre_str.length();
        for(int i=1;i<strs.size();i++){
             string s = strs[i];
             while(str_len>s.length()||pre_str!=s.substr(0,str_len)){
                str_len--;
                if(str_len==0){
                    return "";
                }
                pre_str=pre_str.substr(0,str_len);
             }

        }
        return pre_str;
    }
};