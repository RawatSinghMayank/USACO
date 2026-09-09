#include <bits/stdc++.h>
using namespace std;
class maxHeap
{

    vector<int>
        hp;

public:
    void upheapify(int childidx)
    {

        while (childidx > 0)
        {
            int parentidx = (childidx - 1) / 2;
            if (hp[childidx] > hp[parentidx])
            {
                swap(hp[childidx], hp[parentidx]);
                childidx = parentidx;
            }
            else
            {
                break;
            }
        }
    }
    void push(int val)
    {
        hp.push_back(val);
        upheapify(hp.size() - 1);
    }
    void display()
    {
        for (int i = 0; i < hp.size(); i++)
        {
            cout << hp[i] << " ";
        }
    }
    int peek()
    {
        return hp[0];
    }
    bool isempty()
    {
        return hp.size() == 0;
    }
    void downheapify(int parentidx)
    {

        while (parentidx < hp.size())
        {
            int lchild = 2 * parentidx + 1, rchild = 2 * parentidx + 2;
            if (lchild >= hp.size())
                return;
            int maxEle = parentidx;
            if (hp[lchild] > hp[maxEle])
            {
                maxEle = lchild;
            }
            if (rchild < hp.size() and hp[rchild] > hp[maxEle])
            {
                maxEle = rchild;
            }
            if (maxEle != parentidx)
            {
                swap(hp[maxEle], hp[parentidx]);
                parentidx = maxEle;
            }
            else
                return;
        }
    }
    int pop()
    {
        if (isempty())
            return -1;
        int x = hp[0];
        swap(hp[0], hp[hp.size() - 1]);
        hp.pop_back();
        if (!isempty())
            downheapify(0);
        return x;
    }
};
int main()
{
    maxHeap heap;
    heap.push(3);
    heap.push(4);
    heap.push(11);
    heap.push(9);
    heap.push(14);
    heap.push(-1);
    heap.push(30);
    heap.push(44);
    heap.push(50);
    heap.display();
    cout << endl;
    cout << heap.pop() << endl;
    heap.display();
    cout << endl;
    cout << heap.pop() << endl;
    heap.display();
    cout << endl;
    cout << heap.pop() << endl;
    heap.display();
    return 0;
}