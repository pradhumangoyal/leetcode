class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.length();
        int prev = 0, next = -n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            if (i == 0 || next < i) {
                int temp = i;
                while(i < n && S[i]!= C )
                    ++i;
                prev = next;
                next = i;
                i = temp;
            }
            //cout << prev << " " << next << endl;
            if (prev == -1) {
                v[i] = next - i;
            }
            if (next == n)
                next = INT_MAX;
            v[i] = min (i - prev, next - i);
        }
        return v;
    }
};