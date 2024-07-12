class Solution {
public:
    string normalizeString(string s) {
        string normal_string;
        for (char c : s) {
            if (isalnum(c)) {
                normal_string += tolower(c);
            }
        }
        return normal_string;
    }
    

    bool isPalindrome(string s) {
        string normal_string = normalizeString(s);
        int n=normal_string.size();
        bool is_pal=true;
        for(int i=0;i<n/2;i++){
            if(normal_string[i]!=normal_string[n-1-i]){
                is_pal=false;
                break;
            }

        }
        return is_pal;
        
    }
};