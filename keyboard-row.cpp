class Solution {
public:
    int dict[26] = {0};
    
    Solution () {
        string row_one = "qwertyuiop";
        string row_two = "asdfghjkl";
        string row_three = "zxcvbnm";
        for (auto c : row_one)
            dict[c-'a'] = 1;
        
        for (auto c : row_two)
            dict[c-'a'] = 2;
        
        for (auto c : row_three)
            dict[c-'a'] = 3;
    }
    
    vector<string> findWords(vector<string>& words) {
        vector <string> res;
        for (auto w : words) {
            bool check = true;
            
            if (w.size() <= 1)
            {
                res.push_back(w);
                continue;
            }
            int row = dict[tolower(w[w.size()-1]) - 'a'];
            int i;
            for (i = 0; i < w.size()-1; i++) {
                if (dict[tolower(w[i]) -'a'] != row )
                    break;
            }
                         
            if (i == w.size()-1)
                res.push_back(w);
        }
                
        return res;
        
    }
};