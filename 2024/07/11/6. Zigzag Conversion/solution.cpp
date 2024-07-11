class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1) return s;
        int n=s.length();
        string res;
        int increase;
        for(int r=0;r<numRows;r++){
            increase=2*(numRows-1);
            for(int i=r;i<n;i+=increase){
                res+=s[i];
                if(r>0 && r<numRows-1 && i+increase-2*r<n){
                    res+=s[i+increase-2*r];
                }
            }

        }
        return res;
    }
};