class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag = 0;
        int count = 0;
        for (int i = 0; i < word.length( ); ++i ) {
            if (word[i] >= 'a' && word[i] <= 'z')
                flag = 1;
            if (word[i] >= 'A' && word[i] <= 'Z')
                count++;
            if (flag && word[i] >= 'A' && word[i] <= 'Z')
                return false;
            if (count > 1 && word[i] >= 'a' && word[i] <= 'z')
                return false;
        }
        return true;
    }
};