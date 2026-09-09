#include <bits/stdc++.h>
using namespace std;
void toh(char source, char helper, char destination, int n)
{
    if (n == 0)
        return;
    toh(source, destination, helper, n - 1);
    cout << "Moving " << n << " disks from" << source << " " << destination << endl;
    toh(helper, source, destination, n - 1);
}
int main()
{
    int n;
    cin >> n;
    toh('A', 'B', 'C', n);
    return 0;
}