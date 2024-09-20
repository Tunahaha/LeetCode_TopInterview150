class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            auto itr=lower_bound(temp.begin(),temp.end(),nums[i]);
            if(itr==temp.end()){
                temp.push_back(nums[i]);
            }
            else{
                int index=itr-temp.begin();
                temp[index]=nums[i];
            }
        }
        return temp.size();
    }
};