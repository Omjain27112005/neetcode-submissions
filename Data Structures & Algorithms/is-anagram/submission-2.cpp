class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<int>hash(27,0);
        for(int i=0;i<n;i++){
            hash[s[i]-'a']++;
        }
        for(int j=0;j<m;j++){
            hash[t[j]-'a']--; 
        }
        for(int i=0;i<27;i++){
            if(hash[i]!=0){
                return false;
            }
        }
        return true;
    }
};
