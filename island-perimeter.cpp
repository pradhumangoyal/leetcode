class Solution {
public:
     bool outOfBounds(vector<vector<int>>& grid,  int rowIndex, int columnIndex) {
        return rowIndex >= grid.size() ||  columnIndex >= grid[0].size() ||rowIndex < 0 ||   columnIndex < 0;
            
    }
    int countPerimeter(vector<vector<int>>& grid, int i, int j) {
        int localPerimeter = 0;
        if(outOfBounds(grid, i-1, j) || grid[i-1][j]==0) localPerimeter++;
        if(outOfBounds(grid, i+1, j) || grid[i+1][j]==0) localPerimeter++;
        if(outOfBounds(grid, i, j-1) || grid[i][j-1]==0) localPerimeter++;
        if(outOfBounds(grid, i, j+1) || grid[i][j+1]==0) localPerimeter++;
        return localPerimeter;
    }
    
   
    int islandPerimeter(vector<vector<int>>& grid) {
         int totalPerimeter = 0;
        for(int i=0; i< grid.size(); i++) {
            for(int j=0; j< grid[i].size(); j++) {
                if(grid[i][j] == 1) {
                    totalPerimeter += countPerimeter(grid, i, j);
                }
            }
        }
        return totalPerimeter;
    }
    
};