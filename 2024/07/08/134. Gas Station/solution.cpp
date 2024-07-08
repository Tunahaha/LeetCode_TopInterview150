class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int start_inx=0;
        int total = 0;
        int temp = 0;
        for(int i=0;i<n;i++){
            total+=gas[i]-cost[i];
            temp+=gas[i]-cost[i];
            if(temp<0){
                temp=0;
                start_inx=i+1;
            }

        }
        return (total<0)?-1:start_inx;
        
    }
};