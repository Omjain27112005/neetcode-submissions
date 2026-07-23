class Solution {
public:
bool find(vector<vector<char>>& board,string word,
int i,int j,int indx,vector<vector<int>>&vis){
       if(indx==word.size()){
             return true;
       }
       vis[i][j]=1;
       vector<int>dx={-1,0,1,0};
       vector<int>dy={0,-1,0,1};
       for(int k=0;k<=3;k++){
        int fr=i+dx[k];
        int fc=j+dy[k];
        if(fr>=0 && fc>=0 && fr<board.size() && fc<board[0].size()
         && board[fr][fc]==word[indx] && !vis[fr][fc]){
                  if(find(board,word,fr,fc,indx+1,vis)) return true;
        }
       }
         vis[i][j]=0;
            return false;
       }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
           vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
             if(board[i][j]==word[0] && !vis[i][j]){
                if(find(board,word,i,j,1,vis)) return true;
             }
            }
        }
        return false;
    }
};
