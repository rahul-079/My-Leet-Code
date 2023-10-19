class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string st,ts;
        if(st.size()!=ts.size()) return false;
        for(auto c : s){
            if(c!='#')
            {
                st.push_back(c);
            }
            if(c=='#')
            {
                if(!st.empty())
                {
                    st.pop_back();
                }
            }
        }
        for(auto c : t){
            if(c!='#')
            {
                ts.push_back(c);
            }
            if(c=='#')
            {
                if(!ts.empty())
                {
                    ts.pop_back();
                }
            }
        }
        return st == ts;
    }
};