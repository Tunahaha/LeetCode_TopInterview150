class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int x=obstacleGrid.size();
        int y=obstacleGrid[0].size();
        vector<int> res(y,0);
        res[0]=1;
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(obstacleGrid[i][j]==1)
                res[j]=0;
                else if(j>0)
                res[j]=res[j]+res[j-1];
            }
        }
        return res[y-1];
    }
};