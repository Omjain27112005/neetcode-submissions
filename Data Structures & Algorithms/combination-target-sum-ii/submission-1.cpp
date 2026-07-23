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
         solve(nums,target-nums[idx],idx+1,ans,res);
         res.pop_back();
        }
        while(idx+1<nums.size() && nums[idx]==nums[idx+1]) idx++;
           
           solve(nums,target,idx+1,ans,res);
            }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
            vector<vector<int>>ans;
          vector<int>res;
          sort(nums.begin(),nums.end());
              solve(nums,target,0,ans,res);
              return ans;
    }
};
