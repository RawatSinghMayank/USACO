#include <bits/stdc++.h>
using namespace std;
int smallestValue(int n)
{
    int arr[100000 + 1];
    for (int i = 2; i <= 100000; i++)
        arr[i] = 1;

    for (int i = 2; i * i <= 100000; i++)
    {
        if (arr[i] == 1)
        {
            for (int j = i * i; j <= 100000; j = j + i)
            {
                arr[j] = 0;
            }
        }
    }
    for (int i = 2; i <= 50; i++)
    {
        if (arr[i] % 2 == 1)
            cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            while (n % i == 0)
            {
                n = n / i;
                        }
        }
    }
    if (n != 1)
        cout << n;
}