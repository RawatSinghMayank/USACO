// remove all elements  present at even positions in queue.Consider 0  based indexing
#include <bits/stdc++.h>
using namespace std;
void display(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        q.push(x);
    }
    cout << endl;
}
void RemoveEvenPosition(queue<int> &q)
{

    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        q.pop();
        if (i % 2 != 0)
        {
            q.push(x);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    RemoveEvenPosition(q);
    display(q);

    return 0;
}
