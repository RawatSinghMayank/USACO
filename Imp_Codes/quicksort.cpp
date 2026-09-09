#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low, j = high;
    while (i < j)
    {
        while (v[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (v[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(v[i], v[j]);
        }
    }
    swap(v[j], v[low]);
    return j;
}

void quicksort(vector<int> &v, int low, int high)
{
    if (low < high)
    {

        int pivot = partition(v, low, high);
        quicksort(v, low, pivot - 1);
        quicksort(v, pivot + 1, high);
    }
}
int main()
{
    vector<int> v = {5, 3, 2, 4, 1};

    quicksort(v, 0, v.size() - 1);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}