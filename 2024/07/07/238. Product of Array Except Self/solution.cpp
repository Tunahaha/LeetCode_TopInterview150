class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int> new_nums(n);
        new_nums[0]=1;
        int right=1;
        for(int i=1;i<n;i++){
            new_nums[i]=new_nums[i-1]*nums[i-1];
        }
        for(int j=n-1;j>=0;j--){
            new_nums[j]*=right;
            right*=nums[j];
        }
        return new_nums;
    }
};