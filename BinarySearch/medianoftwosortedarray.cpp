#include <bits/stdc++.h>
using namespace std;
// approach 1
// double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
// {
//     int i = 0, j = 0;
//     int n1 = nums1.size();
//     int n2 = nums2.size();

//     vector<int> nums3;
//     while (i < n1 && j < n2)
//     {
//         if (nums1[i] <= nums2[j])
//         {
//             nums3.push_back(nums1[i]);
//             i++;
//         }
//         else
//         {
//             nums3.push_back(nums2[j]);
//             j++;
//         }
//     }
//     while (i < n1)
//     {
//         nums3.push_back(nums1[i]);
//         i++;
//     }
//     while (j < n2)
//     {
//         nums3.push_back(nums2[j]);
//         j++;
//     }
//     int n = n1 + n2;
//     if (n % 2 != 0)
//     {
//         return nums3[n / 2];
//     }
//     return (double)((double)nums3[n / 2] + (double)nums3[n / 2 - 1]) / 2;
// }

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    int n = n1 + n2, eletwo = n / 2, eleone = n / 2 - 1;
    int counter = 0, idx1 = -1, idx2 = -1, i = 0, j = 0;
    while (i < n1 and j < n2)
    {
        if (nums1[i] < nums2[j])
        {
            if (counter == eleone)
                idx1 = nums1[i];

            else if (counter == eletwo)
                idx2 = nums1[i];

            counter++;
            i++;
        }
        else
        {
            if (counter == eleone)
                idx1 = nums2[j];
            else if (counter == eletwo)
                idx2 = nums2[j];
            counter++;
            j++;
        }
    }

    while (i < n1)
    {
        if (counter == eleone)
            idx1 = nums1[i];
        else if (counter == eletwo)
            idx2 = nums1[i];

        counter++;
        i++;
    }
    while (j < n2)
    {
        if (counter == eleone)
            idx1 = nums2[j];
        else if (counter == eletwo)
            idx2 = nums2[j];

        counter++;
        j++;
    }
    if (n % 2 == 0)
        return (double)(double(idx1) + double(idx2)) / 2.0;
    return idx2;
}

int main()
{
    vector<int> v1, v2;
    v1 = {1, 2};
    v2 = {3, 4};
    cout << findMedianSortedArrays(v1, v2);
    return 0;
}