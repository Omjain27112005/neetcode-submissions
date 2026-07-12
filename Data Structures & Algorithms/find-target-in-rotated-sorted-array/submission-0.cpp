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
           else if(a[mid]>=a[l]){
                if(target<=a[mid] && target>=a[l]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
               if(target>=a[mid] && target<=a[h]){
                    l=mid+1;
               } 
               else{
                h=mid-1;
               }
            }
          }
          return -1;
        
    }
};
