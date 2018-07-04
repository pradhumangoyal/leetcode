class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if (r * c  != nums.size() * nums[0].size())    
            return nums;
        vector<vector<int>> ret(r);
        int row = nums.size();
        int ai = 0, aj = 0;
        for (int i = 0; i < row; ++i) {
              int col = nums[i].size();
            for (int j = 0; j < col; ++j) {
                ret[ai].push_back(nums[i][j]);
                aj++;
                if (aj == c) {
                    aj = 0;
                    ai++;
                }
            }
        }
        return ret;
    }
    
};