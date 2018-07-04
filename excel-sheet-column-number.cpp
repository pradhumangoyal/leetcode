class Solution {
public:
    int titleToNumber(string S) {
        int ans = 0;
        for (int i =0; i < S.length(); ++i) {
            ans = 2 * ans + S[i] - 'A' + 1; 
        }
        return ans;
    }
};