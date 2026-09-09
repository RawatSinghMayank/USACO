#include <iostream>
using namespace std;
void duplicate(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    int a = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[a++] = arr[i];
        }
    }
    arr[a] = arr[n - 1];
    cout << "after array" << endl;
    for (int i = 0; i <= a; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    cout << "enter no of elements" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "enter elemens" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "before array" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    duplicate(arr, n);
    return 0;
}