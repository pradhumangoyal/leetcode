class Solution {
public:
    string toGoatLatin(string S) {
        string ans = "";
        int i = 0;
        int cnt = 0;
        map<char , bool> mp = { {'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}, {'A', 1}, {'E', 1}, {'I', 1}, {'O', 1}, {'U', 1} };
        while (i < S.length()) {
            string temp = "";
            
            while(S[i] != '\0' && S[i] != ' ') {
                temp += S[i++];
            }
            ++i;
            cout << temp << endl;
            if (temp.empty()  || temp == "") {
               continue;
            }
             cnt++;
            if (mp[temp[0]]) {
                temp += "ma";
            } else {
                temp += temp[0];
                temp = temp.substr(1);
                temp += "ma";
            }
            for (int j = 0; j < cnt; ++j)
                temp += "a";
            ans += temp;
            ans += " ";
        }
        return ans.substr(0, ans.length() - 1); 
    }
};