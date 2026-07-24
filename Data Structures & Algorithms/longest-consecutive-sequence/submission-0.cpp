class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>st;
        for(int num:nums){
            st.insert(num);
        }
        int maxi=0;
       for(int num:st){
         
         if(st.find(num-1)==st.end()){
            int cnt=1;
            int curr=num;
            while(st.find(curr+1)!=st.end()){
               cnt++;
               curr++;
            }
            maxi=max(cnt,maxi);
         }

       }
      
      return maxi;

    }
};
