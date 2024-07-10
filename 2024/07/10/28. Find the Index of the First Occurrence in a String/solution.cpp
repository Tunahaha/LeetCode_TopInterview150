class Solution {
public:
    int strStr(string haystack, string needle) {
        int str_size=haystack.size();
        int res=-1;
        while(str_size>0){
            if(haystack.find(needle)==string::npos){
                break;
            }
            res=haystack.find(needle);
            haystack=haystack.substr(0,haystack.length()-1);
        }
     return res;   
    }
};