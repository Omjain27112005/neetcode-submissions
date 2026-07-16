class Solution {
public:
void dfs(vector<vector<char>>& grid,vector<vector<int>>&vis,int r,int c){
    vis[r][c]=1;
    vector<int>dx={1,0,-1,0};
    vector<int>dy={0,1,0,-1};
    for(int i=0;i<4;i++){
        int fr=r+dx[i];
        int fc=c+dy[i];

        if(fr>=0 && fc>=0 && fr<grid.size() && fc<grid[0].size() && !vis[fr][fc] && grid[fr][fc]=='1'){
            dfs(grid,vis,fr,fc);
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
           if(!vis[i][j] && grid[i][j]=='1'){
            dfs(grid,vis,i,j);
            cnt++;
           }
            }
        }
        return cnt;
    }
};
