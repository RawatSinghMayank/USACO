#include <bits/stdc++.h>
using namespace std;

int findPlatform(vector<int> &arr, vector<int> &dep)
{

    int maxi = INT_MIN;
    int i = 0, j = 0;
    int c = 1;
    int n1 = arr.size();
    int n2 = dep.size();
    vector<string> ans1;
    vector<string> ans2;
    for (int i = 0; i < n1; i++)
    {

        int x = arr[i] % 1200;
        string str = to_string(x);
        if (str.length() == 1)
        {
            str = "000" + str;
        }
        else if (str.length() == 2)
        {
            str = "00" + str;
        }
        else if (str.length() == 3)
        {
            str = "0" + str;
        }

        ans1.push_back(str);
        x = dep[i] % 1200;
        string s = to_string(x);
        if (s.length() == 1)
        {
            s = "000" + s;
        }
        else if (s.length() == 2)
        {
            s = "00" + s;
        }
        else if (s.length() == 3)
        {
            s = "0" + s;
        }

        ans2.push_back(s);
    }
    for (int i = 0; i < n1; i++)
    {
        cout << arr[i] << " " << dep[i] << endl;
        cout << ans1[i] << " " << ans2[i] << endl;
    }
    cout << endl;
    sort(ans1.begin(), ans1.end());
    sort(ans2.begin(), ans2.end());
    while (i < n1 && j < n2)
    {
        if (ans1[i] <= ans2[j])
        {

            c++;
            i++;
            maxi = max(maxi, c - 1);
        }
        else
        {
            j++;
            c = 1;
        }
    }
    return maxi;
}
int main()
{
    vector<int> arr = {900, 940, 950, 1100, 1500, 1800};
    vector<int> dep = {910, 1200, 1120, 1130, 1900, 2000};
    cout << findPlatform(arr, dep);
    return 0;
}