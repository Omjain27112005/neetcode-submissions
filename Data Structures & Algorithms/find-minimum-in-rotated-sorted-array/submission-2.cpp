class Solution {
public:
    int findMin(vector<int> &a) {
    int n=a.size();
    int l=0;
    int h=n-1;
    int mini=INT_MAX;
    while(l<=h){
        int mid= l+(h-l)/2;
        if(a[mid]>=a[l]){
            mini=min(mini,a[l]);
            l=mid+1;
        }
        else{
            mini=min(mini,a[mid]);
            h=mid-1;
        }

        
    }
    return mini;
    }
};
