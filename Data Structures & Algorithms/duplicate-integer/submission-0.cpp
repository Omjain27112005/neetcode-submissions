class Solution {
public:
    bool hasDuplicate(vector<int>& a) {
        unordered_map<int,int>mp;
         int n=a.size();
         for(int i=0;i<n;i++){
            if(mp.find(a[i])!=mp.end()){
                return true;
            }
            mp[a[i]]++;
         }
        return false;
    }
};