class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int  n=nums.size();
       int c=0,d=nums[0] ;
      
        int result = nums[0];
 
    for (int i = 1; i <n; i++){
        d = d ^ nums[i];
        }return d ;
    }
};