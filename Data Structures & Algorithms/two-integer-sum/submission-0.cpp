class Solution {
public:
    vector<int> twoSum(vector<int>&nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        int first=0;
        int second=0;
        for(int i=0;i<n;i++){
            if((mp.find(target-nums[i])!=mp.end()) && (mp[target-nums[i]]!=i)){
                 first=i;
                second=mp[target-nums[i]];
                break;
            }
        }
        return {first,second};
    }
};
