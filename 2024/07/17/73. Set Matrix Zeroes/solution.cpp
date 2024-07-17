class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> set_rows; 
        unordered_set<int> set_columns; 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    set_rows.insert(i);
                    set_columns.insert(j);
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(set_rows.count(i) > 0 || set_columns.count(j) > 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};