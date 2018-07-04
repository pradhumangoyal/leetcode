class Solution {
public:
    
    int getCount(string s, int &i) {
        i = 0;
        int count= 0;
        while(s[i] != ' ') {
            count = count * 10 + (s[i++] - '0') ;
        }
        i++;
        return count;
    }
    
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> mp;
        for (int j = 0; j < cpdomains.size(); ++j) {
            string s = cpdomains[j];
            int idx = 0;
            int count = getCount(s, idx);
            mp[s.substr(idx)] += count;;
            while(idx < s.size()) {
                if (s[idx] == '.')
                    mp[s.substr(idx+1)] += count;
                idx++;
            }
        }
        map<string, int> :: iterator it;
        vector<string> v;
        for (it = mp.begin(); it != mp.end(); ++it) {
            string temp = "";
            temp += to_string(it -> second);
            temp += " ";
            temp += it -> first;
            v.push_back(temp);
        }
        return v;
        
    }
};