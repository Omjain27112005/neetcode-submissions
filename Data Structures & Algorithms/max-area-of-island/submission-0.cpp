class Solution {
public:
   int dfs(vector<vector<int>>& grid,vector<vector<int>>&vis,int r,int c){
    vis[r][c]=1;
    vector<int>dx={1,0,-1,0};
    vector<int>dy={0,1,0,-1};
  int cnt=1;
    for(int k=0;k<4;k++){
        int fr=r+dx[k];
        int fc=c+dy[k];
        if(fr>=0 && fc>=0 && fr<grid.size() &&  
        fc<grid[0].size() && grid[fr][fc]==1 
        && !vis[fr][fc]){
                cnt+=dfs(grid,vis,fr,fc);
        }
    }
            return cnt;
   }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
  vector<vector<int>>vis(m,vector<int>(n,0));
  int maxi=0;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        
        if(!vis[i][j] && grid[i][j]==1){
            maxi=max(maxi,dfs(grid,vis,i,j));
        }
    }
  }
  return maxi;
    }
};
