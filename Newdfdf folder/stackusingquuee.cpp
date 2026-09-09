#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
struct Queue{
    int *arr;
    int front,rear;
    int size;
    int n;
};
typedef struct Queue Queue;
 Queue* create(int size){
     Queue*q= (Queue*)malloc(sizeof(Queue));
    q->n=0;
    q->size=size;

    q->arr=(int*)malloc(sizeof(int)*q->size);
    q->front=q->rear=-1;
    return q;
}

void  enqueue(Queue*q,int val){
    if((q->front==0  && q->rear==q->size-1) || (q->rear+1==q->front))return;
    else if(q->front==-1){
        q->front=q->rear=0;
    }
    else if(q->front!=0 && q->rear==q->size-1){
        q->rear=0;
    }
    else (q->rear)++;
    (q->n)++;
    q->arr[q->rear]=val;
}

int dequeue(Queue*q){
    if(q->front==-1)return -1;
    int data=q->arr[q->front];
    (q->size)--;
    if(q->front==q->rear){
        q->front=q->rear=-1;
    }
    else if(q->front==q->size-1){
        q->front=0;
    }
    else (q->front)++;
    (q->n)--;

    return data;
}

void display (Queue*q){
    if(q->front==-1)return;
    if(q->rear>=q->front){
        for(int i=q->front;i<=q->rear;i++){
            cout<<q->arr[i]<<" ";
        }cout<<endl;
    }
    else {
        for(int i=q->front;i<q->size;i++){
            cout<<q->arr[i]<<" ";
        }
        for(int i=0;i<=q->rear;i++){
            cout<<q->arr[i]<<" ";
        }
        cout<<endl;
    }
}

void stackUsingQueue(Queue*q,int ele){
    enqueue(q,ele);
    for(int i=0;i<q->n-1;i++){
        enqueue(q,dequeue(q));
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the Stack "<<endl;
    cin>>size;
 Queue*q=create(size);
    cout<<"Enter the elements in the stack "<<endl;
    for(int i=0;i<size;i++){
    int x;
    cin>>x;
    stackUsingQueue(q,x);
    }
    display(q);
return 0;
}