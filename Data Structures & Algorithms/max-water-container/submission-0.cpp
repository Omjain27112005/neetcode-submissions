class Solution {
public:
    int maxArea(vector<int>& a) {
           int n=a.size();
           int max_water=INT_MIN;
           int l=0;
           int r=n-1;
          
          while(l<r){
            max_water=max(max_water,(r-l)*min(a[l],a[r]));
            if(a[l]<a[r]) l++;
            else{
              r--;
            }
    }

        
       return max_water;
    }
};
