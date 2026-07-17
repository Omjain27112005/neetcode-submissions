class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int mini=INT_MAX;
        int sum=0;
        while(r<n){
            sum+=nums[r];
            while(sum>k && l<=r){
                sum-=nums[l];
                mini=min(mini,r-l+1);
                l++;
            }
            if(sum==k){
                mini=min(mini,r-l+1);
            }
            r++;
        }
        return mini==INT_MAX?0:mini;
    }
};