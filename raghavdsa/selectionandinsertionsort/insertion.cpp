#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
        cin >> arr[i];
    for (long long i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
    long long sum = 0;
    long long x = 1;
    long long maxsum = 0;

    for (long long i = 0; i < n; i++)
    {
        x = 1;
        sum = 0;

        for (long long j = i; j < n; j = j + x)
        {
            sum = arr[j] - arr[i - 1];

            x++;
        }
        maxsum = max(maxsum, sum);
    }

    cout << maxsum;
}