class Solution {
public:
    int kthGrammar(int n, int k) {
        if (n == 1) 
        return 0;
        int u = 1 << (n - 2);
        if (k <= u) 
        return kthGrammar(n - 1, k);
        else 
        return 1 - kthGrammar(n - 1, k - u);
    }
};