class Solution {
public:
    string longestPalindrome(string s) {
        int left = 0;
        int right = 0;
        int max_len = 1;
        int max_start = 0;
        while(left<size(s) && right<size(s)){
            while(right+1<size(s) && s[left]==s[right+1]){ 
                right++;
            }
            int temp = right-left+1; 
            int x=1;
            while(left-x>=0&&right+x<size(s) && s[left-x]==s[right+x]){
                temp+=2;
                x++;
            }
            if(max_len<temp){
                max_len = temp;
                max_start = left-x+1;
            }
            right++;
            left = right;
        }
        return string(s.begin()+max_start, s.begin()+max_start+max_len);
    }
};