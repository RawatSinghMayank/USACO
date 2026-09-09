#include <bits/stdc++.h>
using namespace std;
void getNumberPattern(int n)
{
    int arr[2 * n - 1][2 * n - 1] = {0};
    int sr = 0, sc = 0, er = 2 * n - 2, ec = 2 * n - 2;
    for (int i = 0; i <= 2 * n - 2; i++)
    {
        for (int j = 0; j <= 2 * n - 2; j++)
        {
            if (i == 0 || i == 2 * n - 2 || j == 0 || j == 2 * n - 2)
                arr[i][j] = n;
        }
        cout << endl;
    }

    for (int i = 0; i <= 2 * n - 2; i++)
    {
        for (int j = 0; j <= 2 * n - 2; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main()
{
    getNumberPattern(4);
}