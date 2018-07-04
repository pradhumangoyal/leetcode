class Solution {
public:
    string reverseString(string s){ 
        int len = s.length();
        cout << s << endl;
        for (int i = 0; i <  (len + 1)/2; ++i) {
            int temp = s[i];
            s[i] = s[len - i - 1];
            s[len - i - 1] = temp;
        }
        return s;
    }
    
    string reverseWords(string s) {
        int left = 0, right = 0;
        string temp = "";
        for (int i = 0 ;i < s.length(); ++i) {
            if (s[i] == ' ') {
                right = i;
                //cout << left << " " << right << endl;
                //cout << s.substr(left, right) << endl;
                temp +=reverseString(s.substr(left, right - left));
                temp+=" ";
                left = i + 1;
            }
        }
        temp +=reverseString(s.substr(left));
        return temp;
    }
};