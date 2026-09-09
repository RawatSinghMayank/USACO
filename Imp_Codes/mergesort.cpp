#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1;
    vector<int> v;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            v.push_back(arr[i]);
            i++;
        }
        else
        {
            v.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        v.push_back(arr[i]);
        i++;
    }
    while (j <= high)
    {
        v.push_back(arr[j]);
        j++;
    }
    int a = 0;
    for (i = low; i <= high; i++)
        arr[i] = v[i - low];
}
void mergeSort(int arr[], int low, int high)
{
    if (low == high)
        return;
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int main()
{

    int arr[] = {5, 6, 2, 6, 3, 6, 3, 6};
    mergeSort(arr, 0, 7);
    for (int i = 0; i < 8; i++)
        std::cout << arr[i] << " ";
    return 0;
}