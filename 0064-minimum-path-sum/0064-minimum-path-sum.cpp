    class Solution {
        public:
        int minPathSum(vector<vector<int>>& grid) {
      
        int m=grid[0].size(),n=grid.size();
        vector<vector<int>>dp(n,vector<int>(m));
        dp[0][0]=grid[0][0];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  int up=INT_MAX,left=INT_MAX;
                    if(i==0 && j==0)continue;
                    if(j>0)left=dp[i][j-1];
                    if(i>0)up=dp[i-1][j];
                    dp[i][j]=grid[i][j]+min(up,left);

        }
        }
        return dp[n-1][m-1];
    }
};