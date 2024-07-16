class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int x = 0;
        int y = 0;
        int temp_x=1;
        int temp_y=0;
        vector<int> res;
        for (int i =0;i<rows*cols;i++){
            res.push_back(matrix[y][x]);
            matrix[y][x]=-101;
            if (!(x+temp_x>=0 && x+temp_x<cols && y+temp_y>=0 && y+temp_y<rows) ||matrix[y+temp_y][x+temp_x]==-101){
                int temp=temp_x;
                temp_x=-temp_y;
                temp_y=temp;
            }
            x+=temp_x;
            y+=temp_y;
        }
        return res;
    }
};