#include<map>
using namespace std;
class Solution {
public:

    int uniqueMorseRepresentations(vector<string>& words) {
            string encoding[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map <string, int> mp;
        for (int i = 0; i < words.size(); ++i) {
            string s = words[i];
            string newS = "";
            for (int j = 0 ;j  < s.length() ; ++ j) {
                newS += encoding[s[j]- 'a'];
            }
            mp[newS]++;
        }
        return mp.size();
    }
};