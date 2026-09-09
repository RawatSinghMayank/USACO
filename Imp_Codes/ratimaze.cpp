#include <bits/stdc++.h>
using namespace std;
// bool can(int i, int j, int n, vector<vector<int>> &grid)
// {

//     if (i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == 0)
//     {
//         return true;
//     }
//     return false;
// }
// void ratinmaze(vector<vector<int>> &grid, int n, int i, int j, int *ans)
// {
//     if (i == n - 1 && j == n - 1)
//     {
//         (*ans)++;
//         return;
//     }
//     grid[i][j] = 2;
//     if (can(i + 1, j, n, grid))
//     {
//         ratinmaze(grid, n, i + 1, j, ans);
//     }
//     if (can(i - 1, j, n, grid))
//     {
//         ratinmaze(grid, n, i - 1, j, ans);
//     }
//     if (can(i, j - 1, n, grid))
//     {
//         ratinmaze(grid, n, i, j - 1, ans);
//     }
//     if (can(i, j + 1, n, grid))
//     {
//         ratinmaze(grid, n, i, j + 1, ans);
//     }
//     grid[i][j] = 0;
// }

// bool can(vector<vector<int>> &m, int n, int row, int col)
// {
//     if (row >= 0 && col >= 0 && row < n && col < n && m[row][col] != 2 && m[row][col] != 1)
//     {
//         return true;
//     }
//     return false;
// }
// void f(vector<vector<int>> &m, int n, int row, int col, int *ans)
// {
//     if (row == n - 1 && col == n - 1)
//     {

//         (*ans)++;
//         return;
//     }

//     if (can(m, n, row + 1, col))
//     {
//         m[row][col] = 2;
//         f(m, n, row + 1, col, ans);
//         m[row][col] = 0;
//     }
//     if (can(m, n, row - 1, col))
//     {
//         m[row][col] = 2;
//         f(m, n, row - 1, col, ans);
//         m[row][col] = 0;
//     }
//     if (can(m, n, row, col + 1))
//     {
//         m[row][col] = 2;
//         f(m, n, row, col + 1, ans);
//         m[row][col] = 0;
//     }
//     if (can(m, n, row, col - 1))
//     {
//         m[row][col] = 2;
//         f(m, n, row, col - 1, ans);
//         m[row][col] = 0;
//     }
// }
bool can(vector<vector<int>> &m, int n, int row, int col)
{
    if (row >= 0 && col >= 0 && row < n && col < n && m[row][col] != 2 && m[row][col] != 0)
    {
        return true;
    }
    return false;
}
void f(vector<vector<int>> &m, int n, int row, int col, string ans, vector<string> &ans1)
{
    if (m[0][0] == 0)
        // o is block 1 is open
        return;
    if (row == n - 1 && col == n - 1)
    {
        ans1.push_back(ans);

        return;
    }

    if (can(m, n, row + 1, col))
    {
        m[row][col] = 2;
        f(m, n, row + 1, col, ans + "D", ans1);
        m[row][col] = 1;
    }
    if (can(m, n, row - 1, col))
    {
        m[row][col] = 2;
        f(m, n, row - 1, col, ans + "U", ans1);
        m[row][col] = 1;
    }
    if (can(m, n, row, col + 1))
    {
        m[row][col] = 2;
        f(m, n, row, col + 1, ans + "R", ans1);
        m[row][col] = 1;
    }
    if (can(m, n, row, col - 1))
    {
        m[row][col] = 2;
        f(m, n, row, col - 1, ans + "L", ans1);
        m[row][col] = 1;
    }
}
int main()
{
    //    vector<vector<int>> grid = {{0, 0, 1, 0, 0, 1, 0}, {1, 0, 1, 1, 0, 0, 0}, {0, 0, 0, 0, 1, 0, 1}, {1, 0, 1, 0, 0, 0, 0}, {1, 0, 1, 1, 0, 1, 0}, {1, 0, 0, 0, 0, 1, 0}, {1, 1, 1, 1, 0, 0, 0}};
    vector<vector<int>> grid = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> ans;
    f(grid, 4, 0, 0, "", ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
