class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a,max=INT_MIN,maxed=0;
        int n=nums.size();
        for(a=0;a<n;a++)
        {
            maxed=maxed+nums[a];
            if (max<maxed)
            {
                max=maxed;
            }   
            if (maxed<0)
            {
                maxed=0;
            }    
        }
        return max;
    }
};