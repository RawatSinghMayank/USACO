#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    int arr[n + 1];
    for (int i = 2; i < n; i++)
        arr[i] = 1;
    for (int i = 2; i * i < n; i++)
    {
        if (arr[i] == 1)
        {
            for (int j = i * i; j < n; j = j + i)
            {
                arr[j] = 0;
            }
        } // T.C=O(n)+O(nlog(logn))+O(n)
    }
    int c = 0;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 1)
            c++;
    }
    return c;
}

int main()
{

    vector<int> v = {};
    cout << countPrimes(16);
    return 0;
}