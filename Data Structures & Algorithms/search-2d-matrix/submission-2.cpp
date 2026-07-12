class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int m=mat.size();
        int n=mat[0].size();
          
       int l=0;
       int h=(m*n)-1;

       while(l<=h){
        int mid=l+(h-l)/2;
        int middle=mat[mid/n][mid%n];
        if(middle==t) return true;
       else  if(middle>t) h=mid-1;
         else l=mid+1;
       }
       return false;

    }
};
