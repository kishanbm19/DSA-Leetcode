class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size(),m=obstacleGrid[0].size();
            vector<vector<int>>dp(n,vector<int>(m,1));
            dp[0][0]=(obstacleGrid[0][0]==1)?0:1;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(obstacleGrid[i][j]==1){dp[i][j]=0;}
                    if(dp[0][j]==0 && j<m-1){dp[0][j+1]=0;}
                    if(dp[i][0]==0 && i<n-1){dp[i+1][0]=0;}
                    if(dp[i][j]==0)continue;
                    if(i!=0 && j!=0)dp[i][j]=(dp[i-1][j]+dp[i][j-1]);
                }
            }
            return dp[n-1][m-1];

    }
};