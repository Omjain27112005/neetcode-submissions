class Solution {
public:
    bool isPalindrome(string s) {
           int n=s.size();
           int l=0;
           int h=n-1;
           while(l<h){
            if((s[l]>=48 && s[l]<=57) || (s[l]>=65 && s[l]<=90)|| (s[l]>=97 && s[l]<=122)){
                 if((s[h]>=48 && s[h]<=57) || (s[h]>=65 && s[h]<=90)|| (s[h]>=97 && s[h]<=122)){
                  if(tolower(s[l])!=tolower(s[h])){
                    return false;
                  }
                  else{
                    l++;
                    h--;
                  }
                }
                else{
                  h--;
                }
            }
            else{
              l++;
            }
           }
           return true;
    }
};
