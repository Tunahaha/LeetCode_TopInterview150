class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       vector<int>ans(n);
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            int index=(i+k)%n;
            ans[index]=nums[i];
        }
        nums=ans;
    }
};