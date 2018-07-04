class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor, int  color) {
        if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != color) {
            return;
        }
        const int dx[] = {1, -1, 0, 0};
    const int dy[] = {0, 0, 1, -1};
        image[sr][sc] = newColor;
        for (int i = 0; i < 4; ++i) {
            int nx = sr + dx[i];
            int ny = sc + dy[i];
            dfs(image, nx, ny, newColor, color);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (image[sr][sc] == newColor)
            return image;
        dfs(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
};