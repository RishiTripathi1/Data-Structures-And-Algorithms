class Solution {
public:
int LCS(string X, string Y, int n, int m){
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0) dp[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(X[i-1]==Y[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][m];
}

int LPS(string str, int n){
    string rev = str;
    reverse(rev.begin(), rev.end());
    return LCS(str,rev,n,n);
}

    int minInsertions(string s) {
        int l = s.size();
        return l-LPS(s,l);
    }
};