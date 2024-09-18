class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        for(int i=2;i<nums.size();i++)
        {
            if(i-3>=0)
            nums[i]+=max(nums[i-2],nums[i-3]);
            else
            nums[i]+=nums[i-2];
        }
        return max(nums[nums.size()-1],nums[nums.size()-2]);
    }
};