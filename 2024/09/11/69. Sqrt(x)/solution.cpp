
class Solution {
public:
    int mySqrt(int x) {
        if(x <= 0) return x;
        int low = 1, high = x;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(x / mid == mid) return mid;
            else if(x / mid < mid){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low - 1;
    }
};