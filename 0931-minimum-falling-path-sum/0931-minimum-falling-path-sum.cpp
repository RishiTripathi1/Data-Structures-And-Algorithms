class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        if(n==1) return matrix[0][0];
        vector<vector<int>>dp(n+1, vector<int>(n+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==1) dp[i][j]=matrix[i-1][j-1]+ min(dp[i-1][j],dp[i-1][j+1]);
                if(j==n) dp[i][j]=matrix[i-1][j-1]+ min(dp[i-1][j],dp[i-1][j-1]);
                if(j<n && j>1) dp[i][j]=matrix[i-1][j-1]+min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1]));
            }
        }
        int mini = INT_MAX;
        for(int j=1;j<=n;j++) mini=min(dp[n][j],mini);
        return mini;
    }
};