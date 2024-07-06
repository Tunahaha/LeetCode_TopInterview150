class Solution {
public:
    int lengthOfLastWord(string s) {
        int res=0;
        bool last=false;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!=' '){
                res++;
                last=true;
            }
            else if(last){
                break;
            }
        }
        return res;
        
    }
};