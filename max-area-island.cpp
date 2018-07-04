class Solution {
public:
    bool **visited;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int dx[] = {-1, 1, 0 , 0};
        int dy[] = {0, 0, 1, -1};
        int row = grid.size();
        int col = grid[0].size();
        int ans=  INT_MIN;
        visited = new bool*[row];
        for (int i = 0; i < row; ++i)
        {
            visited[i] = new bool[col];
            for (int j = 0; j < col; ++j) 
                visited[i][j] = 0;
        }
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                int count = 0;
                if (grid[i][j] == 1)
                    dfs(i, j, grid, count, row, col,dx,dy);
                ans = max(ans, count);
            }
        }
        return ans;
        
    }
    void dfs(int x, int y, vector<vector<int>>&grid, int &count, int row, int col, int dx[], int dy[]) {
        if (visited[x][y])
            return;
        visited[x][y] = 1;
        if (grid[x][y] == 1)
            count++;
        for (int i =0 ; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < row && ny >= 0 && ny < col && grid[nx][ny] == 1 )
                dfs(nx, ny, grid, count, row, col,dx,dy);
        }
    }
};