// #include<iostream>
// #include<queue>
// #include<vector>
// #include<string>

// using namespace std;

// int main() {

//     queue<int> q;
//     q.push(2);
//     q.push(3);
//     cout << q.front() << endl;
//     cout << q.size() << endl;
//     cout << q.empty() << endl;
//     cout << q.back() << endl;
//     q.pop();
// }

// DISADVANTAGE OF USIGN ARRAY FOR STACK AND QUEUE IMPLEMENTATION Is
// STATIC SIZE THAT'S WHY LINKED LIST COMES IN PICTURE

#include<iostream>
#include<queue>
#include<vector>
#include<string>

using namespace std;
class myQueue {

private:
    int *arr;
    int frontIdx;
    int rear;
    int capacity;
    int currSize;

public:
    myQueue(int n) {
        capacity = n;
        arr = new int[n];
        frontIdx = rear = -1;
        currSize = 0;
    }

    int size() {
        return currSize;
    }

    bool empty() {
        return currSize == 0;
    }

    bool isFull() {
        return currSize == capacity;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }

        if (empty()) {
            frontIdx = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }

        arr[rear] = x;
        currSize++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue is empty\n";
            return;
        }

        if (currSize == 1) {
            frontIdx = rear = -1;
        } else {
            frontIdx = (frontIdx + 1) % capacity;
        }

        currSize--;
    }

    int front() {
        if (empty()) return -1;
        return arr[frontIdx];
    }

    int back() {
        if (empty()) return -1;
        return arr[rear];
    }
};