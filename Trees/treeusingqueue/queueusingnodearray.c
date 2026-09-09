#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*lchild, *rchild;
};
typedef struct Node Node;
Node*createNode(int val){
    Node*temp=(Node*)malloc(sizeof(Node));
    temp->lchild=temp->rchild=NULL;
    temp->data=val;
    return temp;
}
struct Queue {
    int size;
    int front;
    int rear;
    Node **Q;
};
typedef struct Queue Queue;
Queue* create(int size){
    Queue*q=(Queue*)malloc(sizeof(Queue));
     q->size=size;
    q->Q=(Node**)malloc(q->size*sizeof(Node*));
    q->front=q->rear=-1;
}


void enqueue(Queue* q, Node*value) {
    if((q->front==0 && q->rear==q->size-1) || (q->rear+1==q->front))return ;
    if(q->front==-1){
        q->front=q->rear=0;
    }
    else if(q->front!=0 && q->rear==q->size-1){
        q->rear=0;
    }
    else (q->rear)++;
    q->Q[q->rear]=value;

}

Node* dequeue(Queue* q) {
    if(q->front==-1)return NULL;
    Node*x=NULL;
    if(q->front==q->rear)q->front=q->rear=-1;
    else if(q->front==q->size-1)q->front=0;
   else  (q->front)++;  
   x=q->Q[q->front];
    return x;
}

void display(Queue*q){
    for(int i=q->front;i<=q->rear;i++){
     printf("%d  ",q->Q[i]->data);
   }
}
bool isEmpty(Queue*q){
    return q->front==-1;
}


int main(){
   Node*x=createNode(20);
   Node*y=createNode(230);
   x->data=30239;
  
   y->data=3233;
   Queue*q=create(2);
   enqueue(q,x);
   enqueue(q,y);
   display(q);
return 0;
    
}