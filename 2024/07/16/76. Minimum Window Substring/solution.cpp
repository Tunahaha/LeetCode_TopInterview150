class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) {
            return "";
        }
        string res;
        vector<int> letter(128, 0);
        int left = 0;
        int right = 0;
        int min_len=INT_MAX;
        int start_index=0;
        int count = t.length();
        for (char c : t) {
            letter[c]++;
        }
        while (right < s.length()){
            char c = s[right++];
            if (letter[c]-- > 0) {
                count--;
            }
            while(count==0){
                if (right-left<min_len){
                    min_len=right-left;
                    start_index=left;
                }
                char c_2 = s[left++];
                if (letter[c_2]++==0){
                    count++;
                }
            }
        }

        return min_len == INT_MAX ? "" : s.substr(start_index, min_len);
    }
};