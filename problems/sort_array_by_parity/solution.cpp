class Solution {
public:
    std::vector<int> sortArrayByParity(std::vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        vector<int>ans ;
        for(int i=0;i< nums.size() ;i++){
            if(nums[i]%2==0) ans.push_back(nums[i]) ;
        } 
        for(int i=0;i< nums.size() ;i++){
            if(nums[i]%2==1) ans.push_back(nums[i]) ;
        } 
          
        
        return ans;
    }
};