class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int i=0 ,j=0 ; 
        vector<int> v ;
        sort(a.begin(),a.end()) ;
        sort(b.begin(),b.end()) ;
        while(i<a.size() && j<b.size()){
           if(i>0 && a[i]==a[i-1]) {
            i++ ;
            continue ;
            }
            if(a[i]<b[j]){
                i++ ;
                }
            else if(a[i] > b[j]){
                j++ ;
            }
            else {
                v.push_back(a[i]) ;
                i++ ;
                j++ ;
            }


        }
        
        

        return v ;
    }
   
};