class Solution {
public:

    int time=0;
    vector<pair<int,int>>dir = {{-1,0},{1,0},{0,-1},{0,1}};

    void bfs(queue<pair<pair<int,int>,int>> &q,vector<vector<int>>&vis,vector<vector<int>>& grid, int n, int m){

        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            time = max(time,t);
            q.pop();

            vis[row][col]=2;

            for(auto d: dir){
                int nrow = row+d.first;
                int ncol = col+d.second;

                if(nrow>=0&&nrow<n && ncol>=0&&ncol<m && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1){
                    vis[nrow][ncol]=2;
                    q.push({{nrow,ncol},t+1});
                    grid[nrow][ncol]=2;
                }
            }
        }
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        

        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>>vis(n,vector<int>(m,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2) q.push({{i,j},0});
            }
        }

        bfs(q,vis,grid,n,m);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return time;
    }
};