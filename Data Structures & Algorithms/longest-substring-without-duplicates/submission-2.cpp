class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int max_l=INT_MIN;
        int l=0;
        int r=0;
        if(n==0) return 0;
        while(r<n){
           while(mp.find(s[r])!=mp.end() && l<r){
                   mp[s[l]]--;
                   
             if(mp[s[l]]==0){
                mp.erase(s[l]);
             }
              l++;

           }
           mp[s[r]]++;

           max_l=max(max_l,r-l+1);
           r++;
        }
        return max_l;
    }
};
