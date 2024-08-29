class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = INT_MIN, minSum = INT_MAX, totalSum = 0, cmax = 0, cmin = 0;
        for(int num: nums) {
            cmax = max(cmax+num, num);
            maxSum = max(maxSum, cmax);

            cmin = min(cmin+num, num);
            minSum = min(cmin, minSum);

            totalSum += num;
        }
        if(maxSum < 0 ) return maxSum;
        return max(maxSum, totalSum - minSum);
    }
};