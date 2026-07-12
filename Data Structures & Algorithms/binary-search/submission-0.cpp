class Solution {
public:
    int search(vector<int>& a, int target) {
        int n=a.size();
        int l=0;
        int h=n-1;

        while(l<=h){
           int mid=l+(h-l)/2;
           if(a[mid]==target){
            return mid;
           }
           if(a[mid]>target){
            h=mid-1;
           }
           else{
            l=mid+1;
           }
        }
    return -1;
    }
};
