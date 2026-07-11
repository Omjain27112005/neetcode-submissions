class Solution {
public:
    bool isValid(string s) {
         int n=s.size();
        stack<int>st;
       int l=0;
       while(l<n){
        if(st.empty() && (s[l]=='}' || s[l]==')' || s[l]==']')){
            return false;
        }
       else if((s[l]=='}' && st.top()=='{') || (s[l]==']' && st.top()=='[') || (s[l]==')' && st.top()=='(')){
            st.pop();
        }
        else{
            st.push(s[l]);
        }
        l++;
       }
       if(st.empty()){
        return true;
       }
     return false;
    
    }
};
