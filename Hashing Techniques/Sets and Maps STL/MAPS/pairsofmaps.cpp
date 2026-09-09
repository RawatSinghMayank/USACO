#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> mp;
    pair<string, int> p1;
    p1.first = "Mayank";
    p1.second = 42;
    pair<string, int> p2;
    p2.first = "Pankaj";
    p2.second = 25;
    mp.insert(p1);
    mp.insert(p2);
    // is method sai acha to ye hai sidhe niche waala
    mp["nigga"] = 1;
    for (auto it : mp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    auto it = mp.find("nigga");
    for (it != mp.end())
    {

        mp.erase("Mayank");

        cout << endl;
        for (auto it : mp)
        {
            cout << it.first << "->" << it.second << endl;
        }
    }
}
