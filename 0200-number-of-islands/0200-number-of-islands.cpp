class Solution {
public:

    void dfs(int r, int c,vector<vector<int>>&vis,vector<vector<char>>& grid, int n, int m){
        vis[r][c]=1;

        int drow[]={-1,0,0,1};
        int dcol[]={0,-1,1,0,};

        for(int i =0;i<4;i++){
            int nrow = r+drow[i];
            int ncol = c+dcol[i];

            if(nrow>=0&&nrow<n && ncol>=0&&ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                dfs(nrow,ncol,vis,grid,n,m);
            }
        }
    }



    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    cnt++;
                    dfs(i,j,vis,grid,n,m);
                }
            }
        }
        return cnt;
    }
};