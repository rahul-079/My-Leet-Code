class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        int c=0 ;
        int m=0 ;
        for(auto x:mp){
            if(x.second>c && x.second>arr.size()/4){
                c=x.second ;
                m=x.first ;
            }
        }
        
        return m ;

    }
};