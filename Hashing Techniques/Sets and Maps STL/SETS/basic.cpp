#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(9);
    s.insert(10);
    for (auto it : s)
        cout << it << endl;
    if (s.find(333) != s.end())
        cout << "find" << endl;
    else
        cout << "Not found " << endl;
    return 0;
}