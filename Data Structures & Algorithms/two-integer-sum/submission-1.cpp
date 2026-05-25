class Solution {
public:
    vector<int> twoSum(vector<int>&nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int first=0;
        int second=0;
        for(int i=0;i<n;i++){
            if((mp.find(target-nums[i])!=mp.end()) && (mp[target-nums[i]]!=i)){
                 first=i;
                second=mp[target-nums[i]];
                break;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return {second,first};
    }
};
