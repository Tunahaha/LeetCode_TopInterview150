class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for (int i=0;i<nums.size();i++){
            int target_num=target-nums[i];
            if (mp.find(target_num)!=mp.end()){
                return {mp[target_num],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};