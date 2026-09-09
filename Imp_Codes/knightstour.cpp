#include <bits/stdc++.h>
using namespace std;
bool can(vector<vector<int>> &grid, int i, int j, int n)
{
    if (i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == -1)
    {
        return true;
    }
    return false;
}
void display(vector<vector<int>> &grid, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grid[i][j] << "   ";
        }
        cout << endl;
    }
    cout << "******************" << endl;
    return;
}

void ans(vector<vector<int>> &grid, int i, int j, int n, int count)
{
    if (count == n * n - 1)
    {
        grid[i][j] = count;
        display(grid, n);
        grid[i][j] = -1;
        return;
    }
    vector<int> dx = {1, -1, 2, 2, -1, 1, -2 - 2};
    vector<int> dy = {2, 2, -1, 1, -2, -2, -1, 1};
    for (int k = 0; k < 8; k++)
    {
        if (can(grid, i + dx[k], j + dy[k], n))
        {
            grid[i][j] = count;

            ans(grid, i + dx[k], j + dy[k], n, count + 1);
            grid[i][j] = -1;
        }
    }
}

int main()
{

    vector<vector<int>> grid(5, vector<int>(5, -1));
    ans(grid, 0, 0, 5, 0);
    return 0;
}