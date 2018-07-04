class Solution {
public:
    char findTheDifference(string s, string t) {
        int i = 0, j = 0;
        int diff = 0;
        while ( i < s.length() && j < t.length()) {
            diff += s[i++] - t[j++]; 
        }
        if (s.length() < t.length()) {
        
                diff = 0 - diff;
            return t[j] + diff; 
        } else {
            return s[i] + diff;
        }
    }
};