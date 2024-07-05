class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int citations_size=citations.size();
        for(auto i=0;i<citations.size();i++){
            int k =citations_size-i;
            if (k<=citations[i]){
                return k;
            }
        }
        return 0;
    }
};