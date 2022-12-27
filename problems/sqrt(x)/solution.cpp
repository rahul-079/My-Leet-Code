class Solution {
public:
    int mySqrt(int x) {
        int b=0 ,e=x ;
        long int mid, ans;
        while(b<=e){
            mid=(b+e)/2 ;
            if(mid*mid==x){
                ans=mid ;
                break ;
            }
            else if(mid*mid<x){
              b=mid+1 ;
              ans=mid ;
            }
            else {
                e=mid-1 ;
            }

        }

        return ans ;

    }
};