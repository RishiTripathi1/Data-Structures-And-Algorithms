class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();
        if(nums[0][0] || nums[m-1][n-1]) return 0;
        int dp[m][n];
        dp[0][0]=1;
        for(int i=1;i<m;i++){
            if(nums[i][0]) dp[i][0]=0;
            else dp[i][0]=dp[i-1][0];
        }
        for(int j=1;j<n;j++){
            if(nums[0][j]) dp[0][j]=0;
            else dp[0][j]=dp[0][j-1];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(nums[i][j]) dp[i][j]=0;
                else dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};