class Solution {
public:
    int rate(vector<int>& p, int k,int m){
        int cnt=0;
        for(int i=0;i<p.size();i++){
         cnt+=ceil((double)p[i]/m);
        }
        return cnt;
    }
    
    int minEatingSpeed(vector<int>& p, int k) {
         int n=p.size();
        int h=*max_element(p.begin(),p.end());
        int l=1;
        int ans;
           while(l<=h){
        int m=l+(h-l)/2;
        if(rate(p,k,m)<=k){
            ans=m;
            h=m-1;
        }
        else{
            l=m+1;
        }
 }
 return ans;
    }

};