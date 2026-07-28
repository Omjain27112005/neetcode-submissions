class Solution {
public:
  void twosum(vector<int>&nums,int target,int idx,vector<vector<int>>&ans){
           
           int k=idx+1;
           int j=nums.size()-1;
           while(k<j){
           int sum=nums[k]+nums[j];
           if(sum>target){
            j--;
           }
           else if(sum<target){
            k++;
           }
           else{
            while(k<j && nums[k]==nums[k+1]) k++;
            while(k<j && nums[j]==nums[j-1]) j--;

            ans.push_back({-target,nums[k],nums[j]});
            k++;
            j--;
           }

           }
    
  }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
                vector<vector<int>>ans;
        if(n<3) return {};

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i>=1 && nums[i]==nums[i-1]){
                continue;
            }
            int target=-(nums[i]);

            twosum(nums,target,i,ans);
        }
        return ans;
    }
};
