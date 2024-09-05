class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size()-1;
        int m = nums2.size()-1;
        vector<int> res;
        for(int i = 0; i<nums1.size();i++){
            res.push_back(nums1[i]);
        }
        for(int i = 0; i<nums2.size();i++){
            res.push_back(nums2[i]);
        }
        sort(res.begin(),res.end());
        if (res.size() % 2 == 0) {
            return (float)(res[(res.size() / 2)] + res[((res.size() / 2) - 1)]) / 2;
        } else {
            return res[res.size() / 2];
        }
    }
};