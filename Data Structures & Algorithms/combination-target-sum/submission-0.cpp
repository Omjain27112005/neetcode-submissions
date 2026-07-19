class Solution {
public:
   void solve(vector<int>& nums, int target, int idx, 
    vector<vector<int>>&ans,vector<int>res){
        if(idx==nums.size())  {
          if(target==0) {
               ans.push_back(res);
          }
          return;
        }
        if(target>=nums[idx]){
         res.push_back(nums[idx]);
         solve(nums,target-nums[idx],idx,ans,res);
         res.pop_back();
        }
           
           solve(nums,target,idx+1,ans,res);
            }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
          vector<vector<int>>ans;
          vector<int>res;
              solve(nums,target,0,ans,res);
              return ans;

    }
};
