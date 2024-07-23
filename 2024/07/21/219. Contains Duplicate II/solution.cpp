class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for (int i=0;i<nums.size();i++){
            int temp=nums[i];
            if (mp.find(temp)!=mp.end()&& i-mp[temp]<=k){
                return true;
            }
            mp[temp]=i;
        }
        return false;
    }
};