class Solution {
public:
    int som(vector<int>m){
    int s=0 ;
    for(int i=0 ;i<m.size();i++){
        s=s+m[i] ;
     }

     return s ;
}
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       vector<int>a ;
       vector<pair<int,int>> p ;

       for(int i=0 ;i<mat.size() ;i++){
          int j=som(mat[i]) ;
          p.push_back(make_pair(j,i)) ;
       } 
       sort(p.begin(),p.end() ) ;
       for(int i=0 ;i<k ;i++){
           a.push_back(p[i].second) ;
       }

       return a ;
    }
};


