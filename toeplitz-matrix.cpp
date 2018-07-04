class Solution {
public:
    bool check(int x, int y, int row, int col, int val, vector<vector<int>>&matrix) {
        x++;
        y++;
        while(x >=0 && x < row && y>= 0 && y < col) {
            if (matrix[x][y] != val)
                return false;
            x++;
            y++;
        }
        return true;
    }
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i = 0; i < col - 1; ++i) {
            if (!check(0, i, row, col, matrix[0][i], matrix))
                return false;
        }
        for (int i = 1; i < row -1; ++i) {
            
            if (!check(i, 0, row, col, matrix[i][0], matrix))
                return false;
        }
        return true;
    }
};