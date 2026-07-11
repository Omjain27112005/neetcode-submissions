class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        int n=a.size();
        stack<pair<int,int>>st;
        vector<int>ans(n);
        ans[n-1]=0;
        st.push({a[n-1],n-1});
        for(int i=n-2;i>=0;i--){
         while(!st.empty() && st.top().first<=a[i]){
                st.pop();
             }
              if(st.empty()){
                ans[i]=0;
                st.push({a[i],i});
             }
             else{
                ans[i]=st.top().second-i;
                st.push({a[i],i});
             }
          }
return ans;
    }
};
