class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        for(int row =0;row<rows;row++){
            for (int col=0; col<cols;col++){
                 int count=0;
                 for(int n=row-1;n<=row+1;++n){
                    for (int m = col-1;m<=col+1;m++){
                        if(col==m &&row == n) continue;
                        if (n>=0&& n<rows && m>=0 && m < cols && (board[n][m]==1||board[n][m]==-1)){
                            count ++;
                        }
                    }
                 }
                 
                 if (board[row][col]==1 && (count<2||count>3)){
                    board[row][col]=-1;
                 }
                if(board[row][col]==0 && count==3){
                    board[row][col]=2;
                }
            }
        }
        for (int row=0;row<rows;row++){
            for(int col=0;col<cols;col++){
                if (board[row][col]==-1){
                    board[row][col]=0;
                }
                if(board[row][col]==2){
                    board[row][col]=1;
                }
            }
        }

        
    }
};