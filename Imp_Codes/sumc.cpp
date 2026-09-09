#include <bits/stdc++.h>
using namespace std;
void rev(string &ans, int idx, int n, string str)
{
    if (idx == n)
        return;
    rev(ans, idx + 1, n, str);
    ans += str[idx];
}
int main()
{
    string n;
    getline(cin, n);
    string nigga = "";
    rev(nigga, 0, n.length(), n);
    cout << nigga << endl;
    return 0;
}