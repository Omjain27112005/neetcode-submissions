class Solution {
public:
void solve(vector<int>& nums,  vector<int>res , vector<vector<int>>&ans, int idx){
     if(idx==nums.size()){
          ans.push_back(res);
          return;
     }
     res.push_back(nums[idx]);
     solve(nums,res,ans, idx+1);

      res.pop_back();

     while (idx + 1 < nums.size() && nums[idx] == nums[idx + 1]) {
            idx++;
        }

    
     solve(nums,res,ans,idx+1);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      sort(nums.begin(), nums.end()); 
        vector<int>res;
        vector<vector<int>>ans;
         solve(nums,res,ans,0);
         return ans;
    }
};
