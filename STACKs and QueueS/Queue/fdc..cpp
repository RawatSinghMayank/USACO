#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(2);
    cout << q.front() << endl;
    return 0;
}