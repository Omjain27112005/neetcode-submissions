class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
    int first=-1;
    int second=-1;
        for(int i=0;i<n;i++){
              if((mp.find(target-nums[i])!=mp.end()) && (mp[target-nums[i]]!=i)){
                first=i;
                 second=mp[target-nums[i]];
                 break;
              }
              mp[nums[i]]=i;
        }

        return {second,first};
    }
};
