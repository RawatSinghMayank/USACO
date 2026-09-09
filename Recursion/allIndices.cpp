#include <bits/stdc++.h>
using namespace std;

int findAllindices(vector<int> nums, vector<int> &result, int x, int size)
{
    if (size == 0)
        return 0;
    vector<int> subArr(nums.begin() + 1, nums.end());
    int idx = findAllindices(subArr, result, x, size - 1);
    if (nums[0] == x)
    {
        for (int i = idx - 1; i >= 0; i--)
        {
            result[i + 1] = result[i] + 1;
        }
        result[0] = 0;
        idx++;
    }
    else
    {
        for (int i = idx - 1; i >= 0; i--)
        {
            result[i] = result[i] + 1;
        }
    }
    return idx;
}

int main()
{
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;
    cout << "Enter elements of the array " << endl;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << "Enter the value of x " << endl;
    int x;
    cin >> x;
    vector<int> result(n);
    int size = findAllindices(nums, result, x, nums.size());
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}