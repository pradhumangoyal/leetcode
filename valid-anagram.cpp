class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) 
            return false;
        unordered_map<char,int>m(26);
        for(auto c:t) 
            m[c]++;
        for(int i=0;i<s.size();i++) 
            if(m[s[i]]--<=0) return false;
        return true;
    }
};