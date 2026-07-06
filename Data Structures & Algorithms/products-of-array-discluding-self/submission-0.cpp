class Solution {
public:
    vector<int> productExceptSelf(vector<int>& num) {
        int n=num.size();
        vector<int>ans(n);
      
        ans[0]=1;
        for(int i=1;i<n;i++){
          ans[i]=ans[i-1]*num[i-1];
        }    
        int suff=1;
        for(int i=n-1;i>=0;i--){
               ans[i]*=suff;
               suff*=num[i];
        }
        return ans;

    }
};
