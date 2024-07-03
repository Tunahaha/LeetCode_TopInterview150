class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int res, count=0;
        for(auto x:nums)
        {
            if(count ==0)
            {
                res = x;
                count++;
            }
            else if(x == res)
                count++;
            else
                count--;
        }

        return res;
    };
};