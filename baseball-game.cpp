class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int sum = 0;
        for (int i = 0; i<ops.size(); ++i) {
            string s = ops[i];
            if (s[0] == 'D') {
                int x = st.top();
                sum += (2 * x);
                st.push(2 * x);
            } else if ( s[0] == 'C') {
                sum -= st.top();
                st.pop();
            } else if (s[0] == '+') {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.push(x);
                sum+= (x+y);
                st.push(x + y);
            } else {
                int c = stoi(s);
                sum += c;
                st.push(c);
            }
        }
        return sum;
    }
};