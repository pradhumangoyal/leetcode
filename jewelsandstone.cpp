#include<map>
using namespace std;
class Solution {
public:
    
    int numJewelsInStones(string J, string S) {
        map <char , bool> mp;
        for (int i = 0 ;i < J.length(); ++i)  {
            mp[J[i]] = true;
        }
        int ans = 0;
        for (int i = 0; i < S.length(); ++i) {
            if (mp[S[i]])
                ans++;
        } 
        return ans;
    }
};