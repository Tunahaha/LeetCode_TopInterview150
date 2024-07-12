class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0;i<s.size();i++) {
            if(isalnum(s[i])) {
                temp+=tolower(s[i]);
            }
        }
        string temp2 = temp;
        reverse(temp.begin(), temp.end());
        return temp==temp2;
    }
};