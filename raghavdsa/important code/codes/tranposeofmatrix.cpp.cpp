#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    int n = matrix[0].size();
    int m = matrix.size();

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    return matrix;
}
//  If matrix is not square
vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    int n = matrix[0].size();
    int m = matrix.size();
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            v[j][i] = matrix[i][j];
        }
    }

    return v;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        vector<int> x1;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            x1.push_back(x);
        }
        v.push_back(x1);
    }

    vector<vector<int>> ans = transpose(v);
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}