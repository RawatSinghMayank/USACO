#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void rev(queue<int> &q)
{
    stack<int> st;
    while (q.size())
    {
        st.push(q.front());
        q.pop();
    }
    while (st.size())
    {
        q.push(st.top());
        st.pop();
    }
}
void display(queue<int> &q)
{
    int size = q.size();
    for (int i = 0; i < size; i++)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
}
void removeevenindex(queue<int> &q)
{
    int n = q.size();
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (flag)
        {
            q.pop();
        }
        else
        {
            q.push(q.front());
            q.pop();
        }
        flag = !flag;
    }
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    removeevenindex(q);
    display(q);
}