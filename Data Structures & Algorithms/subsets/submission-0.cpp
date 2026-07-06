class Solution {
public:
   void subsett(int indx,vector<int>& nums,vector<vector<int>>&ans,vector<int>res){
         if(indx==nums.size()){
          ans.push_back(res);
          return;
         }
         res.push_back(nums[indx]);
         subsett(indx+1,nums,ans,res);
         res.pop_back();
         subsett(indx+1,nums,ans,res);
         
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>res;
        subsett(0,nums,ans,res);
        return ans;

    }
};
