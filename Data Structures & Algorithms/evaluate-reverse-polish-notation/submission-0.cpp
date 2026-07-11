class Solution {
public:
    int evalRPN(vector<string>& t) {
        int n=t.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(t[i]=="+" || t[i]=="-" || t[i]=="/" || t[i]=="*"){
                if(t[i]=="+"){
                    int b=st.top();
                    st.pop();
                    int a=st.top();
                    st.pop();
                    st.push(b+a);
                }
                 if(t[i]=="-"){
                    int b=st.top();
                    st.pop();
                    int a=st.top();
                    st.pop();
                    st.push(a-b);
                }
                 if(t[i]=="/"){
                    int b=st.top();
                    st.pop();
                    int a=st.top();
                    st.pop();
                    st.push(a/b);
                }

                 if(t[i]=="*"){
                    int b=st.top();
                    st.pop();
                    int a=st.top();
                    st.pop();
                    st.push(b*a);
                }
          }
          else
            st.push(stoi(t[i]));
        }
        return st.top();
    }
};
