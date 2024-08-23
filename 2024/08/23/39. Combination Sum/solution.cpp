class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        dfs(candidates,target,0,temp,0,res);
        return res;
    }
    void dfs(vector<int>& candidates, int target, int idx, vector<int>& temp, int total, vector<vector<int>>& res){
        if (total == target) {
            res.push_back(temp);
            return;
        }
        if (total > target || idx >= candidates.size()) {
            return;
        }
        temp.push_back(candidates[idx]);
        dfs(candidates,target,idx,temp,total+candidates[idx],res);
        temp.pop_back();
        dfs(candidates,target,idx+1,temp,total,res);
    }
};