#ifndef Queue_h
#define Queue_h
#include<bits/stdc++.h>
class Node{
    
    public:
     Node*lchild;
     Node*rchild;
    int val;
    Node(){}
    Node(int val){
        this->val=val;
        this->lchild=NULL;
        this->rchild=NULL;
    }
};
class Queue{
    Node* *queue;
    int front,rear,size;
    public:
    Queue(){}
    Queue(int size){
        this->size=size;
        this->front=this->rear=-1;
        this->queue=new Node*[this->size];
        }
        void enqueue(Node*val);
        Node* dequeue();
        bool isEmpty();
};
void Queue::enqueue(Node*val){
    if((front==0 && rear==size-1) || rear+1==front)return ;
    else if(front==-1)front=rear=0;
    else if(front!=0 && rear==size-1)rear=0;
    else rear++;
    queue[rear]=val;
}

Node* Queue:: dequeue(){
    if(front==-1)return  NULL;
   Node*x=queue[front];
   if(front==rear)front=rear=-1;
   else if(front==size-1)front=0;
   else front++;
   return x;
}

bool Queue:: isEmpty(){
    return front==-1;
}

#endif


