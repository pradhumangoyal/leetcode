class Solution {
public:
    void reverse(vector<int>& v) {
        for (int i = 0; i < (v.size())/ 2; ++i) {
            int temp = v[i];
            v[i] = v[v.size() - i - 1];
            v[v.size() - i - 1] = temp;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (int i = 0; i < A.size(); ++i) {
            reverse(A[i]);
            for (int j = 0; j < A[i].size(); ++j)
                A[i][j] ^= 1; 
        }
        return A;
    }
};