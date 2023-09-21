class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int k=nums1.size()+nums2.size() ;
        vector<int> merged ;
        int i=0 ,j=0 ;
        
        while( merged.size() <=(k/2)+1 && i<nums1.size() && j<nums2.size() ){
            if(nums1[i]< nums2[j]){
                merged.push_back(nums1[i]) ;
                i++ ;
            } 
            else {
              merged.push_back(nums2[j]) ;
              j++ ;

            }
        }
        
            while(merged.size() <=((k/2) +1 ) && i<nums1.size()){
                merged.push_back(nums1[i]) ;
                i++ ;
            }
            while(merged.size() <=((k/2) +1 ) && j<nums2.size()){
                merged.push_back(nums2[j]) ;
                j++ ;
            }

        
        if(k%2==0){
            double ans= (merged[k/2] +  merged[(k/2)-1] )/2.0 ; ///2 ; //) ;
            return ans ;
        }
        else return merged[(k-1)/2] ;

        
    }
};