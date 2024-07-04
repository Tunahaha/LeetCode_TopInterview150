class Solution {
public:
    int jump(vector<int>& nums) {
        int res=0;
        int temp_res=0;
        int temp_end=0;

        for(auto i=0;i<nums.size()-1;i++){
            temp_res=max(temp_res,i+nums[i]);
            if (temp_res>=nums.size()-1){
                res++;
                break;
            }
            else if(temp_end==i){
                temp_end=temp_res;
                res++;
            }
        }
        return res;
        
    }
};