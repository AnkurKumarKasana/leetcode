class Solution {
    vector<vector<vector<vector<int>>>> dp;
    int row[4] = {+1, +1, -1, -1};
    int col[4] = {+1, -1, -1, +1};

public:
    bool check(vector<vector<int>>& grid, int i, int j) {
        return i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size();
    }
    int f(vector<vector<int>>& grid, int i, int j, int dir, int c) {
        if (dp[i][j][dir][c] != -1)
            return dp[i][j][dir][c];

        int ans = 1;
        // int same=f(grid,)
        int same = 0;
        if (check(grid, i + row[dir], j + col[dir]) &&
            ((grid[i][j] == 0 && grid[i + row[dir]][j + col[dir]] == 2) ||
             (grid[i][j] == 2 && grid[i + row[dir]][j + col[dir]] == 0))) {
            same = f(grid, i + row[dir], j + col[dir], dir, c);
        }

        int diff = 0;
        if (c > 0 &&
            check(grid, i + row[(dir + 1) % 4], j + col[(dir + 1) % 4]) &&
            ((grid[i][j] == 0 &&
              grid[i + row[(dir + 1) % 4]][j + col[(dir + 1) % 4]] == 2) ||
             (grid[i][j] == 2 &&
              grid[i + row[(dir + 1) % 4]][j + col[(dir + 1) % 4]] == 0))) {
            diff = f(grid, i + row[(dir + 1) % 4], j + col[(dir + 1) % 4],
                     (dir + 1) % 4, c - 1);
        }

        ans += max(same, diff);
        return dp[i][j][dir][c] = ans;
    }
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        dp.resize(n, vector<vector<vector<int>>>(
                         m, vector<vector<int>>(4, vector<int>(2, -1))));

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    ans = max(ans, 1);
                    for (int k = 0; k < 4; k++) {
                        int x = i + row[k];
                        int y = j + col[k];
                        if (check(grid, x, y) && grid[x][y] == 2) {
                            ans = max(ans, 1 + f(grid, x, y, k, 1));
                        }
                    }
                }
            }
        }

        return ans;
    }
};