class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int left=0;
        int right=height.size()-1;
        int max_left=height[left];
        int max_right=height[right];
        while (left<right){
            if (max_left<max_right){
                left++;
                max_left=max(max_left, height[left]);
                res+=max_left-height[left];
            }
            else{
                right--;
                max_right=max(max_right, height[right]);
                res+=max_right-height[right];
            }
        }
        return res;


    }
};