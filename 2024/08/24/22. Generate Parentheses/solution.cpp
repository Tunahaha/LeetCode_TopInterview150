class Solution {
public:
    void dfs(int left,int right, string s,int n,vector<string>& res){
        if(left==right && left+right==n*2){
            res.push_back(s);
            return;
        }
        if (left < n) {
            dfs(left + 1, right, s + "(", n, res);
        }

        if (right < left) {
            dfs(left, right + 1, s + ")", n, res);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        dfs(0,0,"",n,res);
        return res;
    }
};