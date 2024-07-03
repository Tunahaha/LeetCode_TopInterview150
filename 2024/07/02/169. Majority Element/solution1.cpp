class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> majority_map;
        int res=0;
        int majority=0;
        for (int n: nums){
            majority_map[n]++;
            if(majority_map[n]>majority){
                majority=majority_map[n];
                res=n;
            }
        }
        return res;
    }
};