class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 ;
        int n=nums.size() ;
        int high=n-1 ;
         if (n==1){
             if(nums[0]==target){
                 return 0;
             }
             else return -1 ;
         }
         while(low<=high){
             int mid=(high+low)/2 ;
             if(nums[mid]==target) {
                 return mid ;
              }
             else if(target>nums[mid]){
                 low=mid+1 ;
                }
             else{
                 high=mid-1 ;
                }
         }
         return -1 ;
    }
};