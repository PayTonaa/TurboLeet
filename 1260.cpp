#include <vector>

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k)
    {

        int m = grid.size();
        int n = grid[0].size();
        int pointer = m - 1;
        std::vector<std::vector<int>> ans(m, std::vector<int>(n));
        for (int a = 0; a < k; a++)
        {
            for (int row = 0; row < m; ++row)
            {
                int prev = grid[pointer][n - 1];
                ans[row][0] = prev;
                for (int col = 0; col < n - 1; ++col)
                {
                    ans[row][col + 1] = grid[row][col];
                }
                pointer = (pointer+ 1)%m;
            }
            grid = ans;
        }
        return grid;
    }
};
