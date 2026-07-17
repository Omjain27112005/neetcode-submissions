class Solution {
public:

void dfs(vector<vector<char>>& grid,vector<vector<int>>&vis, int i,int j){
    vis[i][j]=1;
    vector<int>dx={1,0,-1,0};
    vector<int>dy={0,1,0,-1};
    for(int k=0;k<4;k++){
        int fr=i+dx[k];
        int fc=j+dy[k];
        if(fr>=0 && fc>=0 && fr<grid.size() 
        && fc<grid[0].size() 
        && grid[fr][fc]=='1' && !vis[fr][fc]){
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
