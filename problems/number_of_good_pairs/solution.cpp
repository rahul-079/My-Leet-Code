class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        map<int,int>m ;
        int sum=0 ;
        for(auto it : a) {
            m[it]++ ;
        }
        for(auto n : m){
            sum= sum+ ((n.second-1)*(n.second))/2 ;
        }
        return sum ;
    }
};