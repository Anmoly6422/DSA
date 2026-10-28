class Solution {
public:
    int m, n;
    int dp[100][100][201];

    bool dfs(vector<vector<char>>& grid, int i, int j, int balance) {
        if (i >= m || j >= n)
            return false;

        if (grid[i][j] == '(')
            balance++;
        else
            balance--;

        if (balance < 0)
            return false;

        if (dp[i][j][balance] != -1)
            return dp[i][j][balance];

        if (i == m - 1 && j == n - 1)
            return dp[i][j][balance] = (balance == 0);

        bool down = dfs(grid, i + 1, j, balance);
        bool right = dfs(grid, i, j + 1, balance);

        return dp[i][j][balance] = (down || right);
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();

        if ((m + n - 1) % 2 != 0)
            return false;

        if (grid[0][0] == ')' || grid[m - 1][n - 1] == '(')
            return false;

        memset(dp, -1, sizeof(dp));

        return dfs(grid, 0, 0, 0);
    }
};