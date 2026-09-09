#include <bits/stdc++.h>
using namespace std;
void Find_secMax_secMin(int arr[], int n)
{
    int Max = INT_MIN, sec_Max = INT_MIN, min = INT_MAX, sec_min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > Max)
        {
            sec_Max = Max;
            Max = arr[i];
        }
        else if (arr[i] > sec_Max and arr[i] != Max)
        {
            sec_Max = arr[i];
        }
        if (arr[i] < min)
        {
            sec_min = min;
            min = arr[i];
        }
        else if (arr[i] < sec_min and arr[i] != min)
        {
            sec_min = arr[i];
        }
    }

    cout << "Secondary Maxima and Minima are :" << sec_Max << " " << sec_min << endl;
    cout << " Minima and Maxima  are :" << min << " " << Max << endl;
    return;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Find_secMax_secMin(arr, n);
}