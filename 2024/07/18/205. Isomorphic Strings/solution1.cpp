class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> s_map;
        unordered_map<char,char> t_map;
        char c1;
        char c2;
        for(int i=0;i<s.size();i++ ){
            c1=s[i];
            c2=t[i];
            if ((s_map.find(c1)!=s_map.end() && s_map[c1]!=c2)||(t_map.find(c2)!=t_map.end() && t_map[c2]!=c1)){
                return false;
            }
            s_map[c1]=c2;
            t_map[c2]=c1;
        }
        return true;
    }
};