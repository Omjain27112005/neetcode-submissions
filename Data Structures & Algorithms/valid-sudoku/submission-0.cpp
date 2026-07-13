class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
           
        //For Rows
       for(int i=0;i<9;i++){
            unordered_set<char>st1;

            for(int j=0;j<9;j++){
                if(a[i][j]=='.') continue;
            
         else if(st1.count(a[i][j])){
                return false;
            }
            else
               st1.insert(a[i][j]);
          }
       }
          
          //For columns 
          for(int i=0;i<9;i++){
            unordered_set<char>st2;

            for(int j=0;j<9;j++){
                if(a[j][i]=='.') continue;
            
         else if(st2.count(a[j][i])){
                return false;
            }
            else
               st2.insert(a[j][i]);
          }
          }
         
         //For Boxs
         vector<unordered_set<char>>st3(9);
         for(int i=0;i<9;i++){
         
              for(int j=0;j<9;j++){
                 if(a[i][j]=='.') continue;
            
                int num=(i/3)*3+(j/3);
                if(st3[num].count(a[i][j])){
                    return false;
                }
                else st3[num].insert(a[i][j]);
              }


         }
         return true;

    }
};
