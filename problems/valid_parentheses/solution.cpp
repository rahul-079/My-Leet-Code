#include<stack>

class Solution{
public:
    bool isValid(string s) {
        stack<char> v ;
       /* if(s[0]=='[' || s[0]=='('|| s[0]=='{' ){
                 v.push(s[0]) ;
            }
        else return false ; */
        
        for(int i=0 ;i<s.size() ;i++) {
            if(s[i]=='[' || s[i]=='('|| s[i]=='{' ){
                 v.push(s[i]) ;
            }
            else if(v.empty()){
                return false ;
            }
            else if(s[i]==']' && v.top()=='['){
                
                v.pop() ;
                
            }
             else if(s[i]==')' && v.top()=='('){
                
                v.pop() ;
                
            }
             else if(s[i]=='}' && v.top()=='{'){
                
                v.pop() ;
                
            }
            else return false ;


        }
        if (v.empty()) return true ;
        else return false ;
        
    }
};