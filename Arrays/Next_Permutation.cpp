#include <bits/stdc++.h>
using namespace std;
/* Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]*/
// Method 1 -Generating all Permutations and checking what's next of given array

void ans(vector<vector<int>> &v, vector<int> nums, int idx)
{
    if (idx == nums.size())
    {
        v.push_back(nums);
        return;
    }

    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[i], nums[idx]);
        if (i != idx && nums[i] == nums[idx])
            continue;
        ans(v, nums, idx + 1);
    }
}
vector<vector<int>> permuteUnique(vector<int> nums)
{
    vector<vector<int>> v;
    sort(nums.begin(), nums.end());
    ans(v, nums, 0);
    return v;
}
void nextPermutation(vector<int> &nums)
{
    vector<vector<int>> allPermutations = permuteUnique(nums);

    int i = 0;
    for (i = 0; i < allPermutations.size(); i++)
    {
        if (equal(allPermutations[i].begin(), allPermutations[i].end(), nums.begin()))
        {
            nums = allPermutations[(i + 1) % allPermutations.size()];
            return;
        }
    }
}
// Method 2 : Use next_permutation(nums.begin(),nums.end());

// Method 3: Optimal
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    nextPermutation(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}