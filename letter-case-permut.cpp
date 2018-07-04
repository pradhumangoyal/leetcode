class Solution {
public:
    vector<string> ans;
    void fnd(string S, int st, int en) {
        ans.push_back(S);
      //  cout <<S << endl;
        for (int i = st; i < en; ++i ) {
            if (S[i] >= '0' && S[i] <= '9')
                continue;
            S[i] = toupper(S[i]);
            fnd(S, i + 1, en);
            S[i] = tolower(S[i]);
        }
    }
    vector<string> letterCasePermutation(string S) {
        for (int i = 0; i < S.length(); ++i)
            S[i] = tolower(S[i]);
        fnd(S, 0, S.length());
        return ans;
    }
};