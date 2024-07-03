class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_price=0;
        for (auto i = 1; i < prices.size(); i++){
            if(prices[i]>prices[i-1]){
                max_price+=prices[i]-prices[i-1];
            }
        }
        return max_price;
    }
};
