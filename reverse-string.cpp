class Solution {
public:
    string reverseString(string s) {
        int len = s.length();
        for (int i = 0; i < (len + 1)/2; ++i) {
            int temp = s[i];
            s[i] = s[len - i - 1];
            s[len - i - 1] = temp;
        }
        return s;
    }
};