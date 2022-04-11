class Solution {
  public:
    int dfs(vector<vector<int>> &grid, int x, int y) {
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == 0)
            return 0;
        grid[x][y] = 0;
        return dfs(grid, x - 1, y) + dfs(grid, x + 1, y) + dfs(grid, x, y - 1) +
               dfs(grid, x, y + 1) + 1;    
    }
    
    int maxAreaOfIsland(vector<vector<int>> &grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) { ans = max(ans, dfs(grid, i, j)); }
            }
        }
        return ans;
    }
};