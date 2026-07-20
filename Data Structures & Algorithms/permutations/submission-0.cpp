class Solution {
public:

void solve(vector<int>& nums , vector<vector<int>>&ans, vector<int>res, vector<int>&freq){
              if(res.size() == nums.size()){
                ans.push_back(res);
                return;
              }
              for(int i=0;i<nums.size();i++){
                if(freq[i]!=1){
                res.push_back(nums[i]);
                freq[i]=1;
                  solve(nums,ans,res,freq);
                    freq[i]=0;
                  res.pop_back();
                  }
              }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
       vector<int>freq(nums.size(),0);
       solve(nums,ans,res,freq);
        return ans;
    }
};
