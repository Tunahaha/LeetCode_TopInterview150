class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_container=0;
        int left = 0;
        int right = height.size()-1;
        while(left<right){
            int temp_container=min(height[left],height[right])*(right-left);
            if (temp_container>max_container){
                max_container=temp_container;
            }
            if (height[right]>height[left]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_container;

    }
};