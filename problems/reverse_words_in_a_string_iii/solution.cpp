class Solution {
public:
    string reverseWords(string s) {
        stack<char> rev;
        int i = 0;
        while (i <= s.size()) {
            if (s[i] == ' ' || i == s.size() ) {
                while (!rev.empty()) {
                    s[i - rev.size()] = rev.top();
                    rev.pop();
                }
                i++;
            } else {
                rev.push(s[i]);
                i++;
            }
        }
        return s;
    }
};
