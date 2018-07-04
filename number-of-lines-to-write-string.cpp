class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int currWidth = 0;
        int line = 1;
        for (int i = 0; i < S.length(); ++i) {
            currWidth = currWidth + widths[S[i] - 'a'];
            if (currWidth > 100) {
                line ++;
                currWidth = 0;
                i--;
            }
        }
        vector <int > v ;
        v.push_back(line);
        v.push_back(currWidth);
        return v;
    }
};